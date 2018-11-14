#include "..\lab3-stack\Stack.h"

#include "gtest.h"

TEST(TStack, can_create_stack_with_positive_size)
{
  ASSERT_NO_THROW(TStack <int> s(5));
}

TEST (TStack,cant_create_stack_with_negative_size)
{
	ASSERT_ANY_THROW(TStack <int> s(-5));
}

/*TEST(TStack, copied_stack_is_equal_to_source_one)
{
	TStack <int> s1(3);
	for (int i=0;i<3;i++)
		s1.Push(i);
	TStack <int> s2(s1);
	EXPECT_EQ(s1,s2);
}*/

TEST(TStack,can_push_elem)
{
	TStack <int> s(3);
	ASSERT_NO_THROW(s.Push(12));
}

TEST(TStack, cant_push_elem)
{
	TStack <int> s(3);
	for (int i=0;i<3;i++)
		s.Push(i);
	ASSERT_ANY_THROW(s.Push(2));
}
TEST(TStack,can_pop_elem)
{
	TStack <int> s(3);
	for (int i=0;i<3;i++)
		s.Push(i);
	ASSERT_NO_THROW(s.Pop());
}
TEST (TStack, cant_pop_elem)
{
		TStack <int> s(0);
		ASSERT_ANY_THROW(s.Pop());
}


