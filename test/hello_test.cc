#include <gtest/gtest.h>

#include "mockPerson.h"

// Demonstrate some basic assertions.
TEST(HelloTest, BasicAssertions) {
  // Expect two strings not to be equal.
  EXPECT_STRNE("hello", "world");
  // Expect equality.
  EXPECT_EQ(7 * 6, 42);
}

TEST(MOCK_TEST, tes1)
{
  mockPerson mp;
  EXPECT_CALL(mp, getName()).WillOnce(::testing::Return("hello_mock"));
  EXPECT_EQ("hello_mock", mp.getName());
}

int main(int arg, char ** v)
{
  ::testing::InitGoogleTest(&arg,v);
  RUN_ALL_TESTS();
  return 0;
}