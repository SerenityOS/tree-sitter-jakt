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

from rich.console import Console
from rich.table import Table
from rich.style import Style
from rich import box

import os
import pathlib
import re
from dataclasses import dataclass
from datetime import date
import fileinput
import hashlib
import sys
import random
import string
import subprocess
from typing import Any, Optional
from types import SimpleNamespace
from enum import Enum

import typer
import tomli
from serde import serde, serialize, field, SerdeSkip
from serde.toml import to_toml

app = typer.Typer()
update_app = typer.Typer()
state_app = typer.Typer()
app.add_typer(update_app, name="update")
update_app.add_typer(state_app, name="state")

console = Console()

state_file = pathlib.Path(pathlib.Path(__file__).parent, "state.toml")
corpus_tests_path = pathlib.Path(__file__, "..", "..", "test", "corpus").resolve()

corpus_test_header_pattern: str = r"=+\n(.*)\n=+\n\s+"


class TestImplemented(Enum):
    """Enum with variants for test completion status."""

    UNIMPLEMENTED = 0
    IMPLEMENTED = 1  # The corpus file exists and is passing Treesitter tests
    FAILING = 2  # The Treesitter test is failing


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
            if ".jakt" not in str(test_path):
                console.log(f"Skipping file: {test_path}")
                continue
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
    for root, _, files in os.walk(corpus_tests_path, topdown=True):
        for name in files:
            file_path = pathlib.Path(root, name)
            file_path_posix = file_path.as_posix()
            file_text = file_path.read_text()
            # Strip out scheme comments
            stripped_text = file_text.replace("; ", "").replace(";", "")
            for x in re.findall(corpus_test_header_pattern, stripped_text):
                if file_path_posix not in list_of_tests:
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
    title: str
    corpus_file_path: pathlib.Path
    jakt_sample_path: pathlib.Path
    jakt_sample_hash: str
    implemented: TestImplemented
    changed: bool = field(metadata={"serde_skip": True})
    deleted: bool = field(metadata={"serde_skip": True})
    new: bool = field(metadata={"serde_skip": True})
    falty: bool = field(metadata={"serde_skip": True})

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

    def is_implemented(self) -> TestImplemented:
        """Returns true if the corpus test does not contain 'NOT IMPLEMENTED' tests."""
        # Strip out scheme comments
        if not self.corpus_file_path.exists():
            return TestImplemented(0)
        stripped_text = (
            self.corpus_file_path.read_text().replace("; ", "").replace(";", "")
        )
        for x in re.findall(corpus_test_header_pattern, stripped_text):
            if "NOT IMPLEMENTED" in x:
                return TestImplemented(0)
        return TestImplemented(1)


@serialize
@dataclass
class TestMap:
    """A list of jakt samples to test"""

    map: list[Test]

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

    def has_new_tests(self) -> bool:
        """Returns true if any of the tests are new."""
        for x in self.map:
            if x.new:
                return True
        return False

    def has_deleted_tests(self) -> bool:
        """Returns true if any of the tests are deleted."""
        for x in self.map:
            if x.deleted:
                return True
        return False

    def has_changed_tests(self) -> bool:
        """Returns true if any of the tests are changed."""
        for x in self.map:
            if x.changed:
                return True
        return False

    def remove_by_corpus_path(self, path: str) -> bool:
        """Removes a test from map by corpus path"""
        for index, x in enumerate(self.map):
            if path in str(x.corpus_file_path):
                del self.map[index]
                return True
        return False


def load_state_file(jakt_path: str) -> TestMap:
    """Deserialize toml state file and rebuild the TestMap"""
    files = tomli.loads(state_file.read_text())
    filezm = TestMap(map=[])
    for test in files["map"]:
        filezm.map.append(
            Test(
                name=test["name"],
                title=test["title"],
                implemented=test["implemented"],
                corpus_file_path=pathlib.Path(os.getcwd(), test["corpus_file_path"]),
                jakt_sample_path=pathlib.Path(jakt_path, test["jakt_sample_path"]),
                jakt_sample_hash=test["jakt_sample_hash"],
                changed=False,
                new=False,
                deleted=False,
                falty=False,
            )
        )
    return filezm


def write_state_file(map: TestMap) -> bool:
    """Serialize map into the state file"""
    created = False
    if not state_file.exists():
        created = True
    with open(state_file, "wb") as f:
        f.write(str.encode(to_toml(map)))
    if created:
        console.log("state file created")
        return True
    console.log("state file updated")
    return True


def build_test_map(jakt_path: str) -> TestMap:
    """Create a list of jakt samples"""
    filez = TestMap(map=[])
    for root, _, files in os.walk(pathlib.Path(jakt_path, "samples"), topdown=True):
        for name in files:
            file_path = pathlib.Path(root, name)
            if ".jakt" not in str(file_path):
                console.log(f"skipping file: {file_path}")
                continue

            file_text = file_path.read_text()
            hash = hashlib.md5(file_text.encode("utf-8")).hexdigest()

            falty = False
            if "/// - error:" in file_text:
                falty = True

            title = ""
            corpus_test_path = convert_jakt_sample_path_to_ts_path(file_path)
            if corpus_test_path.exists():
                with open(corpus_test_path, "rb") as f:
                    corpus_content = f.read()
                if m := re.match(
                    r"(?s)[; ]*=+\s+[; ]*([\w\-= ]+)\s+[; ]*=+", corpus_content.decode()
                ):
                    title = m.groups()[0]
                else:
                    console.log(
                        "[yellow][bold]WARNING[/yellow] - "
                        + f"title regex did not match for file: '{corpus_test_path}'[/bold]"
                    )

            filez.map.append(
                Test(
                    name=name,
                    title=title,
                    corpus_file_path=corpus_test_path,
                    jakt_sample_path=file_path,
                    jakt_sample_hash=hash,
                    implemented=TestImplemented(0),
                    changed=False,
                    new=False,
                    deleted=False,
                    falty=falty,
                )
            )
    return filez


def test_from_corpus_path(corpus_path: str, jakt_path: str) -> Optional[Test]:
    """Create a list of jakt samples"""
    if ".jakt" in corpus_path:
        console.log(f"Skipping file: {corpus_path}")
        return None
    file_path = pathlib.Path(corpus_path)
    stripped_corpus_path = file_path.parts[2:-1]
    sample_path = pathlib.Path(
        jakt_path,
        "samples",
        *stripped_corpus_path,
        file_path.name.replace(".txt", ".jakt"),
    )
    file_text = sample_path.read_text()
    hash = hashlib.md5(file_text.encode("utf-8")).hexdigest()
    console.log(f"Hash: {hash}")
    return Test(
        name=sample_path.name,
        title="",
        corpus_file_path=file_path.absolute(),
        jakt_sample_path=pathlib.Path(
            *sample_path.parts[sample_path.parts.index("samples") :]
        ).absolute(),
        jakt_sample_hash=hash,
        implemented=TestImplemented(0),
        changed=False,
        new=False,
        deleted=False,
        falty=False,
    )


def generate_treesitter_parser():
    """Generate the Treesitter parse.

    Will hard exit non-zero if the command fails.
    """
    try:
        subprocess.run(
            ["tree-sitter", "generate"],
            stdout=subprocess.DEVNULL,
            stderr=subprocess.DEVNULL,
            check=True,
        )
    except subprocess.CalledProcessError:
        console.log(
            "[red]ERROR - a problem occurred generating Treesitter parser[/red]"
        )
        sys.exit(1)
    console.log("generated Treesitter parser successfully")


def run_tree_sitter_test(test: Test):
    """Runs a Treesitter test.

    The result is stored in test.implemented.
    """
    if "NOT IMPLEMENTED" in test.title:
        console.log(f"treesitter test for '{test.title}' is unimplemented")
        test.implemented = TestImplemented.UNIMPLEMENTED
        return
    try:
        subprocess.run(
            ["tree-sitter", "test", "--filter", f"{test.title}"],
            stdout=subprocess.DEVNULL,
            stderr=subprocess.DEVNULL,
            check=True,
        )
    except subprocess.CalledProcessError:
        console.log(f"treesitter test failed for '{test.title}'")
        test.implemented = TestImplemented.FAILING
        return
    test.implemented = TestImplemented.IMPLEMENTED
    console.log(f"treesitter test for '{test.title}' succeeded")


@app.command()
def check(
    jakt_path: str = typer.Option(
        ..., help="The path to the Jakt source code containing the samples directory"
    )
):
    """Check for jakt samples changes"""
    state_file_loaded: bool = False

    generate_treesitter_parser()

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
            test.implemented = test.is_implemented()
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
            elif test.title:
                run_tree_sitter_test(test)
        merged_map.map.append(test)

    for test in sf.map:
        # check for files in the state file that are no longer in the SSOT
        # if any are missing, then they are marked as deleted
        if not ssot.get_by_jakt_sample_path(str(test.jakt_sample_path)):
            test.deleted = True
            merged_map.map.append(test)

    # print table of changes
    print_testmap_table(merged_map)
    print_test_report(merged_map, corpus_list)


def print_testmap_table(tests: TestMap):
    """Print a pretty table of state changes"""
    table = Table(show_header=True, header_style="bold magenta")

    table.add_column("#")
    table.add_column("Corpus Path", justify="left")
    table.add_column("Pass/Fail", justify="center")

    if tests.has_changed_tests():
        table.add_column("Changed", justify="center")

    if tests.has_new_tests():
        table.add_column("New", justify="center")

    if tests.has_deleted_tests():
        table.add_column("Deleted", justify="center")

    implemented_count = 0
    new_count = 0

    for num, test in enumerate(tests.map):
        corpus_path = test.corpus_file_path
        corpus_path_mod = corpus_path.parts[corpus_path.parts.index("corpus") :]
        color: Style = Style(color=None)

        renderables: list = [
            str(num + 1),
            str(pathlib.Path(*corpus_path_mod)),
        ]

        if test.implemented == TestImplemented.FAILING:
            color = Style(color="red")
            renderables.append(":heavy_multiplication_x:")
        elif test.implemented == TestImplemented.IMPLEMENTED:
            color = Style(color="green")
            renderables.append(":heavy_check_mark:")
        else:
            renderables.append("")

        if test.changed and test.implemented == TestImplemented.IMPLEMENTED:
            color = Style(color="red", blink=True, bold=True)
            renderables.append(":heavy_check_mark:")
        elif test.changed:
            color = Style(color="wheat1")
            renderables.append(":heavy_check_mark:")
        elif any(str(x.header) in "Changed" for x in table.columns):
            renderables.append("")

        if test.new:
            color = Style(color="green")
            renderables.append(":heavy_check_mark:")
            if not test.falty:
                new_count += 1
        elif any(str(x.header) in "New" for x in table.columns):
            renderables.append("")

        if test.deleted:
            color = Style(color="red")
            renderables.append(":heavy_check_mark:")
        elif any(str(x.header) in "Deleted" for x in table.columns):
            renderables.append("")

        table.add_row(*renderables, style=color)
    console.log(table)


def print_test_report(tests: TestMap, corpus_list: dict[str, list]):
    """Print a pretty table of state changes"""
    falty_count = 0
    falty_new = 0
    implemented_count = 0
    new_count = 0
    jakt_sample_count = 0
    implemented_changed_count = 0
    unimplemented_count = 0
    jakt_test_changed = 0
    deleted = 0
    failed_count = 0
    for _, test in enumerate(tests.map):
        jakt_sample_count += 1

        if test.implemented == TestImplemented.UNIMPLEMENTED:
            unimplemented_count += 1
        elif test.implemented == TestImplemented.IMPLEMENTED:
            implemented_count += 1
        elif test.implemented == TestImplemented.FAILING:
            failed_count += 1

        if test.changed:
            jakt_test_changed += 1
            if test.implemented == TestImplemented.IMPLEMENTED:
                implemented_changed_count += 1

        if test.new:
            if not test.falty:
                new_count += 1
            else:
                falty_new += 1

        if test.falty:
            falty_count += 1

        if test.deleted:
            deleted += 1

    table = Table(box=box.MINIMAL_DOUBLE_HEAD)
    table.add_column("Count", justify="right")
    table.add_column("Description", justify="left")
    jakt_passable_tests = len(tests.map) - falty_count
    table.add_row(str(jakt_passable_tests), "Jakt 'good' Samples (no expected errors)")
    table.add_row(
        str(falty_count),
        "Jakt 'bad' Samples (produce errors)",
    )
    table.add_row(str(jakt_sample_count), "Total Jakt Samples")
    table.add_row()
    if new_count > 0:
        color = Style(color="green", bold=True)
        table.add_row(
            str(new_count),
            "NEW Jakt Samples",
            style=color,
        )
    if falty_new > 0:
        color = Style(color="green")
        table.add_row(
            str(falty_new),
            "NEW Jakt 'bad' Samples",
            style=color,
        )
    if jakt_test_changed > 0:
        color = Style(color="yellow", bold=True)
        table.add_row(str(jakt_test_changed), "CHANGED Jakt Samples", style=color)
    if implemented_changed_count > 0:
        color = Style(color="red", bold=True)
        table.add_row(
            str(implemented_changed_count),
            "CHANGED Implemented Jakt Samples",
            style=color,
        )
    table.add_row()
    total_tests = jakt_passable_tests + falty_count
    table.add_row(
        str(unimplemented_count),
        "Total Unimplemented Tests",
    )
    table.add_row(
        str(implemented_count),
        "Total Passing Jakt Sample Tests",
    )
    table.add_row()
    table.add_row(
        f"{(implemented_count / total_tests) * 100:.0f}%",
        "Percentage of Jakt Samples implemented and PASSING for Treesitter",
    )
    if deleted > 0:
        table.add_row()
        color = Style(color="red", bold=True)
        table.add_row(str(deleted), "Deleted Jakt Samples", style=color)

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


@app.command()
def sync(
    ctx: typer.Context,
    jakt_path: str = typer.Option(
        ..., help="The path to the Jakt source code containing the samples directory"
    ),
    dry_run: bool = typer.Option(
        default=False, help="Show changes table, but don't do anything"
    ),
):
    """Update the treesitter corpus tests with jakt sample sources"""
    if dry_run:
        update_corpus_print_task_table(ctx.obj.jakt_path)
        return
    console.log("syncing corpus test suite with Jakt sample suite")
    map = build_test_map(jakt_path)

    sf: TestMap
    state_file_loaded = False
    if not state_file.exists():
        write_state_file(map)
        sf = map
    else:
        sf = load_state_file(jakt_path)
        state_file_loaded = True
    state_sync_deleted(sf)

    for v in map.map:
        if state_file_loaded:
            fill_test_props(sf, v)
        if v.corpus_file_path.exists() and v.deleted:
            v.corpus_file_path.unlink()
            console.log(f"deleted '{v.corpus_file_path}'")
            continue
        sample_content: bytes
        with open(v.jakt_sample_path, "rb") as f:
            sample_content = f.read()
        v.corpus_file_path.parent.mkdir(0o744, True, True)
        if not v.corpus_file_path.exists():
            write_new_corpus_test(v, sample_content)
            continue
        if v.changed:
            update_corpus_test(v, sample_content)

    write_state_file(map)

    console.log(
        "[yellow][bold]WARNING[/yellow] - "
        + "please run the `check` command to run tree-sitter tests to finish updating the state[/bold]"
    )


def state_sync_deleted(statefile: TestMap):
    """Compares the statefile and corpus suite for deleted Jakt samples upstream."""
    for sftest in statefile.map:
        if sftest.jakt_sample_path.exists():
            continue
        rel_path = sftest.corpus_file_path.relative_to(os.getcwd())
        console.log(
            f"found '{rel_path}' in statefile, but test has been deleted upstream"
        )
        if not sftest.corpus_file_path.exists():
            console.log(f"'{rel_path}' does not exist, removing from state file")
            continue
        sftest.corpus_file_path.unlink()
        console.log(f"'{rel_path}' has been deleted")


def fill_test_props(statefile: TestMap, mytest: Test):
    """Checks a single Test against the state file"""
    sf_equiv = statefile.get_by_jakt_sample_path(str(mytest.jakt_sample_path))
    if not sf_equiv:
        mytest.new = True
    elif mytest.jakt_sample_hash != sf_equiv.jakt_sample_hash:
        mytest.changed = True


def update_corpus_print_task_table(jakt_path: str):
    """Print a list of tasks to be done to update the TS corpus tests"""
    map = build_test_map(jakt_path)
    sf = load_state_file(jakt_path)

    table = Table(box=box.MINIMAL_DOUBLE_HEAD)
    table.add_column("Counter", justify="left")
    table.add_column("Sample", justify="left")
    table.add_column("Task", justify="center")

    for k, v in enumerate(map.map):
        fill_test_props(sf, v)
        if v.falty:
            color = Style(color=None, dim=True)
            table.add_row(
                str(k + 1), str(v.jakt_sample_path), "ignore: falty", style=color
            )
            continue
        if not v.corpus_file_path.exists():
            color = Style(color="green", bold=True)
            table.add_row(str(k + 1), str(v.corpus_file_path), "create", style=color)
            continue
        if v.changed:
            color = Style(color="yellow", bold=True)
            table.add_row(str(k + 1), str(v.corpus_file_path), "update", style=color)

    for k, v in enumerate(sf.map):
        if not map.get_by_jakt_sample_path(str(v.jakt_sample_path)):
            color = Style(color="red", bold=True)
            table.add_row(str(-1), str(v.corpus_file_path), "deleted", style=color)

    console.log(table)


def corpus_test_banner(title: str) -> str:
    """Wrap a test title in banner ascii."""
    eqlb = "=" * 80
    return f"{eqlb}\n{title}\n{eqlb}\n\n"


def corpus_test_title(corpus_file_path) -> str:
    """Returns a test title generated from test path and name.

    The test title needs to be unique for each test, so as a precaution, a random string
    is added to aid in this requirement.
    """
    random_id = "".join(random.choices(string.ascii_uppercase + string.digits, k=7))
    ts_test_name = (
        " ".join(corpus_file_path.relative_to(os.getcwd()).parts[2:])
        .replace(".txt", "")
        .replace("_", " ")
    ).title()
    uid = f"id={random_id}".upper()
    return f"{ts_test_name} {uid}"


def write_new_corpus_test(test: Test, sample_content: bytes):
    """Writes a new corpus test using sample_content and a default s-expression.

    NOT IMPLEMENTED is appended to the test title so the check command will show that it
    has not been implemented yet. The Tree Sitter CLI does not have good support for
    adding tests but not running them until they are actually implemented.

    In addition, the ';' character is prepended to each line of the test as a hack to
    prevent TS CLI from running the test so the failing test does not pollute the TS test
    suite with false negatives.
    """
    test.title = f"NOT IMPLEMENTED {corpus_test_title(test.corpus_file_path)}"
    ts_banner = corpus_test_banner(test.title)
    console.log(f"creating new test: {test.title!r}")
    sepb = "-" * 80
    content = f"{ts_banner}{sample_content.decode()}\n{sepb}\n\n(source_file)"
    commented_content = ""
    for lin in content.splitlines():
        commented_content += "; " + lin + "\n"
    with open(test.corpus_file_path, "w") as f:
        f.write(commented_content)


def update_corpus_test(test: Test, sample_content: bytes):
    """Update an existing corpus test with content from the jakt sample"""
    with open(test.corpus_file_path, "rb") as f:
        corpus_content = f.read()
    if m := re.search(
        r"(?s)([\;\ ]*\(source_file.+)",
        corpus_content.decode(),
    ):
        test.title = corpus_test_title(test.corpus_file_path)
        ts_banner = corpus_test_banner(test.title)
        console.log(f"updating existing test: {test.title!r}")
        sepb = "-" * 80
        sexpr = m.groups()[0]
        content_new = f"{ts_banner}{sample_content.decode()}\n{sepb}\n\n{sexpr}"
        with open(test.corpus_file_path, "w") as f:
            f.write(content_new)
    else:
        console.log(
            "[yellow][bold]WARNING[/yellow] - "
            + f"s-expr regex did not match for file: '{test.corpus_file_path}'[/bold]"
        )


@update_app.command("readme")
def update_readme(ctx: typer.Context):
    """Update the README with percentage completed"""
    generate_treesitter_parser()

    sf: TestMap

    if not state_file.exists():
        console.log(
            "[red]ERROR - the state file does not exist, please run the `check` command[/red]"
        )
        sys.exit(1)
    else:
        sf = load_state_file(ctx.obj.jakt_path)

    done = 0
    total = len(sf.map)
    for test in sf.map:
        run_tree_sitter_test(test)
        if test.implemented == TestImplemented.IMPLEMENTED:
            done += 1

    perc = (done / total) * 100
    date_now = date.today().strftime("%B %-d, %Y")
    perc_line = (
        f"tree-sitter-jakt implements {int(perc)}% ({done}/{total}) of the Jakt Samples as of "
        + date_now
    )
    console.log(f"New percentage line: '{perc_line}'")
    with fileinput.input(pathlib.Path("README.md"), inplace=True) as f:
        for line in f:
            if re.findall(r"^tree-sitter-jakt implements [\d\.%]+.*$", line):
                print(perc_line)
            else:
                print(line, end="")


@state_app.command("single")
def update_test(
    ctx: typer.Context,
    path: str = typer.Option("", help="Update a test using the corpus path"),
):
    """Update the Jakt sample state for a single test."""
    if not state_file.exists():
        console.log(f"[red][ERROR] - state file {state_file} does not exist[/red]")
        sys.exit(1)

    sf = load_state_file(ctx.obj.jakt_path)

    if not (test := sf.get_by_corpus_path(path)):
        console.log(f"adding single test to state file for '{path}'")
        if not (new_test := test_from_corpus_path(path, ctx.obj.jakt_path)):
            console.log(f"[red][ERROR] - could not update '{path}' in state file[/red]")
            sys.exit(1)
        sf.map.append(new_test)
    else:
        if not pathlib.Path(test.jakt_sample_path).exists():
            console.log("removing deleted sample from state file")
            if not sf.remove_by_corpus_path(path):
                console.log(
                    f"[red][ERROR] - could not remove test by corpus path '{path}' from state file[/red]"
                )
                sys.exit(1)
            else:
                write_state_file(sf)
                console.log(f"test '{path}' removed from state file")
                return
        console.log(f"updating state of single test: '{path}'")
        console.log(f"jakt sample path: '{test.jakt_sample_path}'")
        console.log(f"old hash: {test.jakt_sample_hash}")
        hash = hashlib.md5(
            test.jakt_sample_path.read_text().encode("utf-8")
        ).hexdigest()
        test.jakt_sample_hash = hash
        console.log(f"new hash: {test.jakt_sample_hash}")

    write_state_file(sf)


@state_app.command("all")
def update_state_all(ctx: typer.Context):
    """Update the Jakt sample state for all tests."""
    write_state_file(build_test_map(ctx.obj.jakt_path))  # type: ignore


if __name__ == "__main__":
    app()
