#include "gtest/gtest.h"
#include "../stack.h"

TEST(Stack, Stack_Creation) {
  Stack stack;
}

TEST(Stack, Size) {
  Stack stack;
  ASSERT_EQ(stack.Size(), 0);
}

TEST(Stack, Push) {
  Stack stack;
  stack.Push(1);
  stack.Push(2);
  stack.Push(-4);
  ASSERT_EQ(stack.Size(), 3);
  ASSERT_EQ(stack.Top(), -4);
}

TEST(Stack, Pop) {
  Stack stack;
  std::vector<int> values = {5, 3, -4, 100, -45};

  for (int i = 0; i < values.size(); ++i) {
    ASSERT_EQ(stack.Size(), i);
    stack.Push(values.at(i));
  }
  for (int i = values.size() - 1; i >= 0; --i) {
    ASSERT_EQ(stack.Pop(), values.at(i));
    ASSERT_EQ(stack.Size(), i);
  }
}
