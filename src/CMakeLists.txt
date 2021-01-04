# Copyright 2020 Jim Eliot

add_library(bogus-core bogus-core.cpp)

target_include_directories(bogus-core PUBLIC
  $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>  # <prefix>/include
)

target_link_libraries(bogus-core PRIVATE glog::glog)

# The gflags link libraries depends on the GFLAGS_USE_TARGET_NAMESPACE flag
# defined previously
# target_link_libraries(gflaggage-test PRIVATE gflags::gflags)
target_link_libraries(bogus-core PRIVATE gflags)

install(TARGETS bogus-core DESTINATION lib)

add_executable(bogus-app main.cpp)

target_link_libraries(bogus-app PRIVATE bogus-core)

target_link_libraries(bogus-app PRIVATE glog::glog)

# The gflags link libraries depends on the GFLAGS_USE_TARGET_NAMESPACE flag
# defined previously
# target_link_libraries(gflaggage-test PRIVATE gflags::gflags)
target_link_libraries(bogus-app PRIVATE gflags)

install(TARGETS bogus-app DESTINATION bin)
