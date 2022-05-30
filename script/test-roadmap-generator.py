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

import typer

from rich.console import Console

console = Console()


def main(
    jakt_path: str = typer.Option(
        ..., help="The path to the Jakt source code containing the samples directory"
    )
):
    """A tool for keeping track of Jakt parsing implementation."""
    console.log("Started")

    for root, dirs, files in os.walk(
        pathlib.Path(jakt_path + "samples"), topdown=False
    ):
        for name in files:
            error_file = pathlib
            if any(x in name for x in [".error", ".err", ".out"]):
                console.log(f"skipping {pathlib.Path(root, name)}")
                continue
            if (
                pathlib.Path(root, f"{name[:-5]}.error").exists()
                and pathlib.Path(root, f"{name[:-5]}.err").exists()
            ):
                console.log(f"skipping {pathlib.Path(root, name)}")
                continue
            console.log(os.path.join(root, name))
        # for name in dirs:
        #     console.log(os.path.join(root, name))


if __name__ == "__main__":
    typer.run(main)
