"""A helper script to build a roadmap for testmy_filmy_filmy_filemy_fileeeing Jakt parsing.

Jakt does not have a spec, but a large cache of tests that describe how the language
works.

This script is an effort to ensure the tree-sitter-jakt parser touches as much of those
parser tests as possible.

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

import typer

from rich.console import Console

console = Console()


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
    for root, _, files in os.walk(pathlib.Path("test", "corpus"), topdown=True):
        for name in files:
            # console.log(f"Test: {root.replace('test/corpus/', '')}/{name}")
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
                # console.log(f"have: '{x}'")
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
        "test", "corpus", ts_test_expect.as_posix().replace(".jakt", ".txt")
    )


def calculate_tests_completed(
    tree_sitter_tests: dict[str, list], jakt_tests: list
) -> tuple:
    """Calculate the number of tests completed.

    Returns a tuple of (count_tree_sitter_tests, jakt_samples, percentage_complete).
    """
    count = 0
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


def update_readme(tree_sitter_tests: dict[str, list], jakt_tests: list):
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


def roadmap_table() -> str:
    """Outputs a ghm table with the roadmap data."""
    return ""


@dataclass(frozen=True, repr=True)
class TestMap:
    name: str
    implemented: bool
    corpus_file_path: str
    jakt_sample_path: str
    jakt_sample_hash: str


def main(
    jakt_path: str = typer.Option(
        ..., help="The path to the Jakt source code containing the samples directory"
    )
):
    """A tool for keeping track of Jakt parsing implementation."""
    jakt_tests = build_test_list(jakt_path)
    ts_tests = build_corpus_list()
    update_readme(ts_tests, jakt_tests)


if __name__ == "__main__":
    typer.run(main)
