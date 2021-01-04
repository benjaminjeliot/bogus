// Copyright 2020 Jim Eliot

#include <gtest/gtest.h>

#include <bogus/math.h>

TEST(math, add) {
  EXPECT_EQ(bogus::math::add(-1, 5), 4);
  EXPECT_DOUBLE_EQ(bogus::math::add(3.5, 4), 7.5);
}
