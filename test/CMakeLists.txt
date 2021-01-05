# Copyright 2020 Jim Eliot

find_package(GTest REQUIRED)

add_executable(test-runner
    math_test.cpp
    misc_test.cpp
    test-runner.cpp
)

target_link_libraries(test-runner PRIVATE bogus-core GTest::GTest)

gtest_discover_tests(test-runner)
