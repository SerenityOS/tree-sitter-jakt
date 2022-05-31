"""A helper script to build a roadmap for testing Jakt parsing.

Jakt does not have a spec, but a large cache of tests that describe how the language
works.

This script is an effort to ensure the tree-sitter-jakt parser touches as much of those
parser tests as possible.

Not every test in the samples cache is suitable for tree-sitter-jakt, so this script also
provides a mechanism for marking those tests as implemented.

This script also has a mechanism to ensure if a test is changed, it will be marked as so.
"""

import os
import pathlib
import re

import typer

from rich.console import Console

console = Console()


def build_test_list(jakt_path: str):
    """ """
    list_of_files: list = []
    for root, dirs, files in os.walk(pathlib.Path(jakt_path + "samples"), topdown=True):
        for name in files:
            error_file = pathlib
            if any(x in name for x in [".error", ".err", ".out"]) or re.findall(
                r"_bad[\d]?", name
            ):
                continue
            if (
                pathlib.Path(root, f"{name[:-5]}.error").exists()
                or pathlib.Path(root, f"{name[:-5]}.err").exists()
            ):
                continue
            list_of_files.append(pathlib.Path(root, name))
    return list_of_files


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
