cc_library(
    name = "vol1",
    hdrs = glob(["*.h"]),
    srcs = glob(["*.c"], exclude=["test.c"]),
)

cc_test(
    name = "test",
    srcs = ["test.c"],
    deps = ["@unity//:unity",
            ":vol1"]
)
