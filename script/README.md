# Helper scripts

## A note about python scripts

The python scripts have dependencies on third party python modules. These can be easily
retrieved using [poetry](https://python-poetry.org/). See "how to run tests" section
below.

## roadmapgen.py

A script to compare Jakt Samples with implemented tree-sitter-jakt tests to ensure nothing
is missed.

This is necessary because jakt is new and does not have a spec yet. There are already (as
of Jun 2022) almost two hundred tests and that number will only increase.

### How to run tests for roadmapgen

Prereqs

1. The jakt source code containing the samples
1. Create virtualenv and install poetry
1. Run "poetry install"
1. Run pytest

```
$ cd tree-sitter-jakt/
$ python -m venv myvenv
$ ./myvenv/bin/activate
$ pip install poetry
$ poetry install
$ JAKT_SRC_PATH=/opt/src/jakt python -m pytest script/test
```
