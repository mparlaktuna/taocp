cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

project(taocp)

enable_testing()

include(GoogleTest)
add_library(card card.hpp card.cpp)

add_executable(taocp_test test.cpp)

target_link_libraries(
  taocp_test
  GTest::gtest_main
  card
)

gtest_discover_tests(taocp_test)
