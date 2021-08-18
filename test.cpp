#include "gtest/gtest.h"

#include "Math.h"

TEST(Math, Abs) {
  EXPECT_EQ(Math::abs(-5), 5);
  EXPECT_EQ(Math::abs(0), 0);
  EXPECT_EQ(Math::abs(5), 5);

  EXPECT_EQ(Math::abs(-5.0), 5.0);
  EXPECT_EQ(Math::abs(0.0), 0.0);
  EXPECT_EQ(Math::abs(5.0), 5.0);
}