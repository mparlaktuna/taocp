workspace(
    name = "taocp",
)

load("@bazel_tools//tools/build_defs/repo:git.bzl", "new_git_repository")
load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

new_git_repository(
    name = "unity",
    remote = "https://github.com/ThrowTheSwitch/Unity.git",
    branch = "master",
    build_file = "@taocp//:unity.BUILD"
)

