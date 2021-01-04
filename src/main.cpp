// Copyright 2020 Jim Eliot

#include <gflags/gflags.h>
#include <glog/logging.h>
#include <bogus/math.h>

int main(int argc, char *argv[]) {
  const std::string version{"0.1.0"};
  const std::string usage_message =
      "Bogus application for trying out C++ and CMake stuff";

  gflags::SetVersionString(version);
  gflags::SetUsageMessage(usage_message);
  gflags::ParseCommandLineFlags(&argc, &argv, false);

  // Initialize Google’s logging library.
  google::InitGoogleLogging(argv[0]);
  
  // Handle commandline arguments
  if (argc > 1) {
    LOG(INFO) << "commandline arguments --";
    for (int i = 1; i < argc; ++i) {
      LOG(INFO) << argv[i];
    }
  }

  auto b = bogus::math::add(4.5, 3);

  LOG(INFO) << "b -- " << b;

  return 0;
}
