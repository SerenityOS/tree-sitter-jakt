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
import sys
from typing import Any
from types import SimpleNamespace

import typer
import tomli
from serde import serde, serialize, field, SerdeSkip
from serde.toml import to_toml

app = typer.Typer()
update_app = typer.Typer()
state_app = typer.Typer()
app.add_typer(update_app, name="update")
update_app.add_typer(state_app, name="state")

from rich.console import Console
from rich.table import Table
from rich.style import Style

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
                count += (
                    num_tests_implemented - num_tests_not_implemented
                ) / num_tests_implemented
    num_tests = len(jakt_tests)
    return (count, num_tests, (count / num_tests) * 100)


def _update_readme(tree_sitter_tests: dict[str, list], jakt_tests: list):
    """Updates the main tree-sitter-jakt readme with percent completed."""
    count, num_tests, perc = calculate_tests_completed(tree_sitter_tests, jakt_tests)
    date_now = date.today().strftime("%B %-d, %Y")
    perc_line = f"tree-sitter-jakt implements {count:.2f} of {num_tests} ({perc:.1f}%) of valid Jakt samples as of {date_now}"
    console.log(f"New percentage line: '{perc_line}'")
    with fileinput.input(pathlib.Path("README.md"), inplace=True) as f:
        for line in f:
            if re.findall(r"^tree-sitter-jakt implements [\d\.]+ of [\d]+.+$", line):
                print(perc_line)
            else:
                print(line, end="")


def serializer(cls: Any, o: Any):
    if cls is pathlib.Path:
        if ".txt" in str(o):
            return str(o.relative_to(os.getcwd()))
        elif ".jakt" in str(o):
            samples_index = o.parts.index("samples")
            return str(pathlib.Path(*o.parts[samples_index:]))
    else:
        raise SerdeSkip()


@serde(serializer=serializer)
@dataclass
class Test:
    """A tree sitter test and corresponding Jakt sample."""

    name: str
    implemented: bool
    corpus_file_path: pathlib.Path
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
    # jakt_path: str = field(metadata={"serde_skip": True})

    def get_by_corpus_path(self, path: str) -> Test | None:
        """Returns Test if path is contained in a test"""
        for x in self.map:
            if path in str(x.corpus_file_path):
                return x
        return None

    def get_by_jakt_sample_path(self, path: str) -> Test | None:
        """Returns boolean if path is contained in a test"""
        for x in self.map:
            if path in str(x.jakt_sample_path):
                return x
        return None


# FIXME: user serializer function to create pathlib objs
def load_state_file(jakt_path: str) -> TestMap:
    """Deserialize toml state file and rebuild the TestMap"""
    files = tomli.loads(state_file.read_text())
    filezm = TestMap(map=[])
    for test in files["map"]:
        filezm.map.append(
            Test(
                name=test["name"],
                implemented=test["implemented"],
                corpus_file_path=pathlib.Path(os.getcwd(), test["corpus_file_path"]),
                jakt_sample_path=pathlib.Path(jakt_path, test["jakt_sample_path"]),
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
                    corpus_file_path=convert_jakt_sample_path_to_ts_path(file_path),
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

    # The samples dir in the jakt project directory is the single source of truth (SSOT)
    ssot = build_test_map(jakt_path)
    if not state_file.exists():
        write_state_file(ssot)
        sf = ssot
    else:
        state_file_loaded = True
        sf = load_state_file(jakt_path)

    corpus_list = build_corpus_list()

    # We'll show this to the user to report results of three-way merge
    merged_map = TestMap(map=[])

    for test in ssot.map:
        if (
            corpus_path := convert_jakt_sample_path_to_ts_path(test.jakt_sample_path)
        ).as_posix() in corpus_list:
            test.implemented = True
            test.corpus_file_path = corpus_path
        if state_file_loaded:
            # if we have a state file, we now have to resolve the differences...
            sf_equiv = sf.get_by_jakt_sample_path(str(test.jakt_sample_path))
            if not sf_equiv:
                test.new = True
                merged_map.map.append(test)
                continue
            elif test.jakt_sample_hash != sf_equiv.jakt_sample_hash:
                test.changed = True
                merged_map.map.append(test)
                continue
        merged_map.map.append(test)

    for test in sf.map:
        # check for files in the state file that are no longer in the SSOT
        # if any are missing, then they are marked as deleted
        if not ssot.get_by_jakt_sample_path(str(test.jakt_sample_path)):
            test.deleted = True
            merged_map.map.append(test)

    # print table of changes
    print_testmap_table(merged_map)


def print_testmap_table(tests: TestMap):
    """Print a pretty table of state changes"""
    table = Table(show_header=True, header_style="bold magenta")
    table.add_column("#")
    # table.add_column("Name")
    # table.add_column("Jakt Sample", justify="left", width=35)
    table.add_column("MD5")
    table.add_column("Expected Corpus Path", justify="left")
    table.add_column("Done", justify="center")
    table.add_column("New", justify="center")
    table.add_column("Changed", justify="center")
    table.add_column("Deleted", justify="center")
    for num, test in enumerate(tests.map):
        corpus_path = test.corpus_file_path
        corpus_path_mod = corpus_path.parts[corpus_path.parts.index("corpus") :]
        test_path_mod = test.jakt_sample_path.parts[
            test.jakt_sample_path.parts.index("samples") :
        ]
        color: Style
        if test.new:
            color = Style(color="green")
        elif test.changed and test.implemented:
            color = Style(color="yellow")
        elif test.deleted:
            color = Style(color="red")
        elif test.implemented:
            color = Style(color="blue")
        else:
            color = Style(color=None)
        table.add_row(
            str(num + 1),
            # test.name,
            # str(pathlib.Path(*test_path_mod)),
            test.jakt_sample_hash,
            str(pathlib.Path(*corpus_path_mod)),
            ":ballot_box_with_check:" if test.implemented else "",
            ":ballot_box_with_check:" if test.new else "",
            ":ballot_box_with_check:" if test.changed else "",
            ":ballot_box_with_check:" if test.deleted else "",
            style=color,
        )
    console.log(table)
    console.log("[yellow][bold]WARNING[/yellow] - state file is unsaved[/bold]")


@update_app.callback()
def update(
    ctx: typer.Context,
    jakt_path: str = typer.Option(
        ..., help="The path to the Jakt source code containing the samples directory"
    ),
):
    ctx.obj = SimpleNamespace(jakt_path=jakt_path)


@update_app.command("readme")
def update_readme(ctx: typer.Context):
    """Update the README with percentage completed"""
    jakt_tests = build_test_list(ctx.obj.jakt_path)
    ts_tests = build_corpus_list()
    _update_readme(ts_tests, jakt_tests)


@state_app.command("single")
def update_test(
    ctx: typer.Context,
    path: str = typer.Option("", help="Update a test using the corpus path"),
):
    """Update the Jakt sample state for a single test."""

    if not state_file.exists():
        console.log(f"[red][ERROR] - State file {state_file} does not exist![/red]")
        sys.exit(1)
    sf = load_state_file(ctx.obj.jakt_path)

    if not (test := sf.get_by_corpus_path(path)):
        console.log(f"[red][ERROR] - '{path}' not found in state file![/red]")
        sys.exit(1)

    if path:
        console.log(f"Updating state of single test: '{path}'")
        console.log(f"jakt sample path: '{test.jakt_sample_path}'")
        console.log(f"Old hash: {test.jakt_sample_hash}")
        hash = hashlib.md5(
            test.jakt_sample_path.read_text().encode("utf-8")
        ).hexdigest()
        test.jakt_sample_hash = hash
        console.log(f"New hash: {test.jakt_sample_hash}")
        write_state_file(sf)


@state_app.command("all")
def update_state_all(ctx: typer.Context):
    """Update the Jakt sample state for all tests."""
    write_state_file(build_test_map(ctx.obj.jakt_path))  # type: ignore
    console.log("state file updated")


if __name__ == "__main__":
    console.log(
        "[bold][yellow]WARNING[/yellow]: this script assumes tests are in passing state[/bold]"
    )
    app()
