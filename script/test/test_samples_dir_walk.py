import roadmapgen

import os


def test_samples_dir_walk():
    """Check that there are only valid tests selected by the test roadmap helper script."""
    assert roadmapgen.build_test_list(os.getenv("JAKT_SRC_PATH"))
