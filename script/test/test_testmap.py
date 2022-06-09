import roadmapgen

import pathlib


def test_testmap_is_fully_implemented():
    """Checks a corpus test to see if it is fully implemented."""
    t = roadmapgen.TestMap(
        map=[
            roadmapgen.Test(
                name="foo",
                corpus_file_path=pathlib.Path(
                    __file__,
                    "..",
                    "data/test_testmap_check_fully_implemented_false.txt",
                ).resolve(),
                jakt_sample_path=pathlib.Path(),
                jakt_sample_hash="foo",
                implemented=roadmapgen.TestImplemented(0),
                changed=False,
                deleted=False,
                new=False,
            )
        ]
    )
    t2 = roadmapgen.TestMap(
        map=[
            roadmapgen.Test(
                name="foo",
                corpus_file_path=pathlib.Path(
                    __file__, "..", "data/test_testmap_check_fully_implemented_true.txt"
                ).resolve(),
                jakt_sample_path=pathlib.Path(),
                jakt_sample_hash="foo",
                implemented=roadmapgen.TestImplemented(0),
                changed=False,
                deleted=False,
                new=False,
            )
        ]
    )
    t3 = roadmapgen.TestMap(
        map=[
            roadmapgen.Test(
                name="foo",
                corpus_file_path=pathlib.Path(
                    __file__, "..", "data/test_does_not_exist.txt"
                ).resolve(),
                jakt_sample_path=pathlib.Path(),
                jakt_sample_hash="foo",
                implemented=roadmapgen.TestImplemented(0),
                changed=False,
                deleted=False,
                new=False,
            )
        ]
    )
    assert t.map[0].is_fully_implemented() == roadmapgen.TestImplemented(2)
    assert t2.map[0].is_fully_implemented() == roadmapgen.TestImplemented(1)
    assert t3.map[0].is_fully_implemented() == roadmapgen.TestImplemented(0)
