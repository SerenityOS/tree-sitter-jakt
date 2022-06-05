"""A helper script to build a roadmap for testing Jakt parsing.

Jakt does not have a spec, but a large cache of "samples" that describe how the language
works.

This script is an effort to ensure the tree-sitter-jakt parser touches as much of those
sample tests as possible.

Not every test in the samples cache is suitable for tree-sitter-jakt, so this script also
provides a mechanism for marking those tests as implemented.

This script also has a mechanism to ensure if a test is changed, it will be marked as so.

TODO:
    * keep track of test hash so that when tests change it'll be identified

      A ton of tests have changed in the last few days, including names and contents.

      This will only be flagged when the roadmap.py script is ran
"""

import os
import pathlib
import re
from dataclasses import dataclass
from datetime import date
import fileinput
import hashlib

import typer
import tomli
from serde import serialize, field
from serde.toml import to_toml

app = typer.Typer()
update_app = typer.Typer()
app.add_typer(update_app, name="update")

from rich.console import Console
from rich.table import Table

console = Console()

state_file = pathlib.Path(pathlib.Path(__file__).parent, "state.toml")
corpus_tests_path = pathlib.Path(__file__, "..", "..", "test", "corpus").resolve()


def build_test_list(jakt_path: str) -> list:
    """Builds a list of Jakt samples

    Excludes tests that produce compiler errors.
    Excludes tests that end with "_bad<digit>"
    Excludes tests that end with ".err"
    """
    list_of_files: list = []
    for root, _, files in os.walk(pathlib.Path(jakt_path, "samples"), topdown=True):
        for name in files:
            test_path = pathlib.Path(root, name)
            test = test_path.read_text()
            if "/// - error:" in test:
                console.log(f"skipping failing test: {test_path.as_posix()}")
                continue
            console.log(f"adding test '{test_path}'")
            list_of_files.append(test_path)
    return list_of_files


def build_corpus_list() -> dict[str, list]:
    """Builds a list of corpus tests."""
    list_of_tests: dict[str, list] = {}
    pattern: str = r"=+\n(.*)\n=+\n\s+"
    for root, _, files in os.walk(corpus_tests_path, topdown=True):
        for name in files:
            file_path = pathlib.Path(root, name)
            file_path_posix = file_path.as_posix()
            file_text = file_path.read_text()

            # Strip out scheme comments
            #
            # WARNING: This will strip all semicolons out of the text, but that's okay because we
            #          are only looking for tree-sitter test "headers"
            #
            stripped_text = file_text.replace("; ", "").replace(";", "")

            for x in re.findall(pattern, stripped_text):
                if not file_path_posix in list_of_tests:
                    list_of_tests[file_path_posix] = []
                list_of_tests[file_path_posix].append(x)

    return list_of_tests


def convert_jakt_sample_path_to_ts_path(jakt_sample: pathlib.Path) -> pathlib.Path:
    """Converts a jakt sample path to a tree-sitter corpus test path for alignment."""
    ts_test_expect = pathlib.Path(
        *jakt_sample.parts[jakt_sample.parts.index("samples") + 1 :],
    )
    return pathlib.Path(
        corpus_tests_path, ts_test_expect.as_posix().replace(".jakt", ".txt")
    )


def calculate_tests_completed(
    tree_sitter_tests: dict[str, list], jakt_tests: list
) -> tuple:
    """Calculate the number of tests completed.

    Returns a tuple of (count_tree_sitter_tests, jakt_samples, percentage_complete).
    """
    count: float = 0
    for jakt_test in jakt_tests:
        ts_test_expect_actual = convert_jakt_sample_path_to_ts_path(jakt_test)
        ts_test_str_path = ts_test_expect_actual.as_posix()
        if ts_test_str_path in tree_sitter_tests:
            num_tests_implemented = len(tree_sitter_tests[ts_test_str_path])
            num_tests_not_implemented = 0
            for test in tree_sitter_tests[ts_test_str_path]:
                if "NOT IMPLEMENTED" in test:
                    num_tests_not_implemented += 1
            if num_tests_not_implemented == 0:
                count += 1
            else:
                console.log(ts_test_str_path)
                console.log(jakt_test)
                console.log(tree_sitter_tests[ts_test_str_path])
                count += (
                    num_tests_implemented - num_tests_not_implemented
                ) / num_tests_implemented
    num_tests = len(jakt_tests)
    return (count, num_tests, (count / num_tests) * 100)


def _update_readme(tree_sitter_tests: dict[str, list], jakt_tests: list):
    """Updates the main tree-sitter-jakt readme with percent completed."""
    count, num_tests, perc = calculate_tests_completed(tree_sitter_tests, jakt_tests)
    date_now = date.today().strftime("%B %-d, %Y")
    perc_line = f"tree-sitter-jakt implements {count:.2f} of {num_tests} ({perc:.1f}%) of the Jakt samples as of {date_now}"
    console.log(f"New percentage line: '{perc_line}'")
    with fileinput.input(pathlib.Path("README.md"), inplace=True) as f:
        for line in f:
            if re.findall(r"^tree-sitter-jakt implements [\d\.]+ of [\d]+.+$", line):
                print(perc_line)
            else:
                print(line, end="")


@serialize
@dataclass
class Test:
    """A jakt sample"""

    name: str
    implemented: bool
    corpus_file_path: pathlib.Path | None
    jakt_sample_path: pathlib.Path
    jakt_sample_hash: str
    changed: bool = field(metadata={"serde_skip": True})
    deleted: bool = field(metadata={"serde_skip": True})
    new: bool = field(metadata={"serde_skip": True})

    def jakt_sample_path_to_expected_corpus_path(self) -> pathlib.Path:
        """Converts a jakt sample path to a tree-sitter corpus test path."""
        ts_test_expect = pathlib.Path(
            *self.jakt_sample_path.parts[
                self.jakt_sample_path.parts.index("samples") + 1 :
            ],
        )
        return pathlib.Path(
            corpus_tests_path, ts_test_expect.as_posix().replace(".jakt", ".txt")
        )


@serialize
@dataclass
class TestMap:
    """A list of jakt samples to test"""

    map: list[Test]


def load_state_file() -> TestMap:
    """Deserialize toml state file and rebuild the TestMap"""
    files = tomli.loads(state_file.read_text())
    filezm = TestMap(map=[])
    for test in files["map"]:
        corpus_file_path = (
            test["corpus_file_path"] if "corpus_file_path" in test else None
        )
        filezm.map.append(
            Test(
                name=test["name"],
                implemented=test["implemented"],
                corpus_file_path=corpus_file_path,
                jakt_sample_path=pathlib.Path(test["jakt_sample_path"]),
                jakt_sample_hash=test["jakt_sample_hash"],
                changed=False,
                new=False,
                deleted=False,
            )
        )
    return filezm


def write_state_file(map: TestMap) -> bool:
    """Serialize map into the state file"""
    with open(state_file, "wb") as f:
        f.write(str.encode(to_toml(map)))
    return True


def build_test_map(jakt_path: str) -> TestMap:
    """Create a list of jakt samples"""
    filez = TestMap(map=[])
    for root, _, files in os.walk(pathlib.Path(jakt_path, "samples"), topdown=True):
        for name in files:
            file_path = pathlib.Path(root, name)
            file_text = file_path.read_text()
            hash = hashlib.md5(file_text.encode("utf-8")).hexdigest()
            filez.map.append(
                Test(
                    name=name,
                    implemented=False,
                    corpus_file_path=None,
                    jakt_sample_path=file_path,
                    jakt_sample_hash=hash,
                    changed=False,
                    new=False,
                    deleted=False,
                )
            )
    return filez


@app.command()
def check(
    jakt_path: str = typer.Option(
        ..., help="The path to the Jakt source code containing the samples directory"
    )
):
    """Check for jakt samples changes"""
    state_file_loaded: bool = False

    filez = build_test_map(jakt_path)
    if not state_file.exists():
        write_state_file(filez)
        sf = filez
    else:
        state_file_loaded = True
        sf = load_state_file()

    corpus_list = build_corpus_list()

    # # mark if test implemented or not
    for test in sf.map:
        if (
            corpus_path := convert_jakt_sample_path_to_ts_path(test.jakt_sample_path)
        ).as_posix() in corpus_list:
            test.implemented = True
            test.corpus_file_path = corpus_path

    for beef in sf.map:
        # mark if test has changed
        if state_file_loaded:
            fresh_hash = hashlib.md5(
                beef.jakt_sample_path.read_text().encode("utf-8")
            ).hexdigest()
            if beef.jakt_sample_hash != fresh_hash:
                beef.changed = True

        # mark if test is new
        if state_file_loaded:
            expect_ts_test = beef.jakt_sample_path_to_expected_corpus_path()
            if expect_ts_test.as_posix() not in corpus_list:
                beef.new = True

        # TODO: check sf if jakt samples still exists on fs
        # mark if test is deleted
        # else:
        #     beef.deleted = True

    # print table of changes
    print_testmap_table(sf)


def print_testmap_table(tests: TestMap):
    """Print a pretty table of state changes"""
    table = Table(show_header=True, header_style="bold magenta")
    table.add_column("Name")
    table.add_column("Impl.", style="dim", width=7, justify="center")
    table.add_column("Jakt Sample", justify="left", width=32)
    table.add_column("MD5", style="dim", width=8)
    table.add_column("Corpus Path", style="dim", width=32, justify="left")
    table.add_column("New", justify="center")
    table.add_column("Changed", justify="center")
    table.add_column("Deleted", justify="center")
    for beef in tests.map:
        corpus_path = beef.corpus_file_path
        if corpus_path:
            corpus_path = f"…{corpus_path.as_posix()[-31:]}"
        # TODO: make row green if new
        # TODO: make row yellow if changed
        # TODO: make line red if deleted
        table.add_row(
            beef.name,
            str(beef.implemented),
            f"…{beef.jakt_sample_path.as_posix()[-31:]}",
            beef.jakt_sample_hash,
            corpus_path,
            str(beef.new),
            str(beef.changed),
            str(beef.deleted),
        )
    console.log(table)
    # TODO: print warning about saving state if files have been deleted and/or changed


@update_app.command("readme")
def update_readme(
    jakt_path: str = typer.Option(
        ..., help="The path to the Jakt source code containing the samples directory"
    )
):
    """Update the README with percentage completed"""
    jakt_tests = build_test_list(jakt_path)
    ts_tests = build_corpus_list()
    _update_readme(ts_tests, jakt_tests)


@update_app.command("state")
def update_state():
    """Update the Jakt sample state"""
    # add flag to update readme
    # add flag to update table doc
    # run check state
    # if flag set, update readme
    # if flag set, update table doc
    # save state to toml
    pass


if __name__ == "__main__":
    console.log("WARNING: this script assumes tests are in passing state")
    app()
