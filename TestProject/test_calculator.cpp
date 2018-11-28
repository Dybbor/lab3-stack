#include "..\CLR_12\Project3\TCalculator.h"
#include "gtest.h"

TEST (TCalculator, check_postfix)
{
	string s="2+2";
	TCalculator tmp;
	tmp.SetInfix(s);
	tmp.ToPostfix();
	EXPECT_EQ(tmp.GetPostfix(),"2 2+");
}