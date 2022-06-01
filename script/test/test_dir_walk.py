import roadmapgen

import os


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
