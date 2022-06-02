import roadmapgen

import os
import pathlib


def test_samples_dir_walk():
    """Check that there are only valid tests selected by the test roadmap helper script."""
    jakt_path = os.getenv("JAKT_SRC_PATH")
    assert jakt_path is not None
    files: list = roadmapgen.build_test_list(jakt_path)
    assert files
    for file in files:
        if not file.as_posix().endswith("bad"):
            continue
        assert not any(x in file.as_posix() for x in ["bad"])


def test_corpus_list():
    """Ensure a dict is created that contains the list of corpus files and tests."""
    tests = roadmapgen.build_corpus_list()
    assert tests
    assert len(tests) > 0
    assert type(tests) == dict


def test_convert_jakt_sample_to_ts_path():
    """Ensures the jakt sample path is correcty converted to the tree-sitter equivalent."""
    jakt_sample = pathlib.Path("/opt/jakt/jakt/samples/enums/parse.jakt")
    ts_test = roadmapgen.convert_jakt_sample_path_to_ts_path(jakt_sample)
    assert ts_test == pathlib.Path("test/corpus/enums/parse.txt")


def test_calculate_tests_completed():
    """Check percentage calculation

    Checks using two jakt samples where the second sample is divided into seven individual
    tests with only five completed.
    """
    ts_tests = {
        "test/corpus/enums/recursive_enums.txt": ["Boxed enum"],
        "test/corpus/enums/parse.txt": [
            "Simple enum",
            "Simple enum with type",
            "Simple enum with struct type",
            "Simple enum with mixed variants",
            "NOT IMPLEMENTED Simple enum with Type Parameter",
            "NOT IMPLEMENTED Simple enum with multiple Type Parameters",
            "Enum with underlying type",
        ],
    }
    jakt_tests = [
        pathlib.Path("/opt/jakt/jakt/samples/enums/parse.jakt"),
        pathlib.Path("/opt/jakt/jakt/samples/enums/recursive_enums.jakt"),
    ]
    tup = roadmapgen.calculate_tests_completed(ts_tests, jakt_tests)
    assert tup == (1.7142857142857144, 2, 85.71428571428572)
