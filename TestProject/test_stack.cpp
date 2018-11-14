#include "..\lab3-stack\Stack.h"

#include "gtest.h"

TEST(TStack, can_with_positive_size)
{
  ASSERT_NO_THROW(TStack <int> s(5));
}

