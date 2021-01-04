# Copyright 2020 Jim Eliot

cmake_minimum_required(VERSION 3.16)

project(bogus)

option(enable_test "Enable test suite -- requires Google Test" ON)

# It seems to be necessary to set GFLAGS_USE_TARGET_NAMESPACE in order to be
# use the `gflags::gflags` target, rather than the `gflags` target.
# set(GFLAGS_USE_TARGET_NAMESPACE TRUE)
find_package(gflags REQUIRED)

find_package(glog REQUIRED)

add_subdirectory(include)

add_subdirectory(src)

if(enable_test)
    enable_testing()
    add_subdirectory(test)
endif()
