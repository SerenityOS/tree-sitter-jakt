"""A helper script to build a roadmap for testing Jakt parsing.

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
            list_of_files.append(pathlib.Path(root, name))
    return list_of_files


def build_corpus_list() -> dict[str, list]:
    """Builds a list of corpus tests."""
    list_of_tests: dict[str, list] = {}
    pattern: str = r"=+\n(.*)\n=+\n\s+"
    for root, _, files in os.walk(pathlib.Path("test", "corpus"), topdown=True):
        for name in files:
            console.log(f"Test: {root.replace('test/corpus/', '')}/{name}")
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
                console.log(f"have: '{x}'")
                if not file_path_posix in list_of_tests:
                    list_of_tests[file_path_posix] = []
                list_of_tests[file_path_posix].append(x)

    return list_of_tests


def update_readme():
    """Updates the main tree-sitter-jakt readme with percent completed."""
    pass


def roadmap_table() -> str:
    """Outputs a ghm table with the roadmap data."""
    return ""


def percent_implemented() -> int:
    """Calculates the percentage of tests implemented in tree-sitter-jakt."""
    # num_corpus_tests: imt = 0
    # num_jakt_samples: int = 0
    return 0


@dataclass(frozen=True, repr=True)
class TestMap:
    name: str
    implemented: bool
    corups_file_path: str
    jakt_sample_path: str
    jakt_test_hash: str

    def jakt_sample_code(self):
        """ """
        pass


def main(
    jakt_path: str = typer.Option(
        ..., help="The path to the Jakt source code containing the samples directory"
    )
):
    """A tool for keeping track of Jakt parsing implementation."""
    console.log("Started")
    for file in build_test_list(jakt_path):
        console.log(file)


if __name__ == "__main__":
    typer.run(main)
