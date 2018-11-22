#include "TCalculator.h"

TCalculator::TCalculator()
{
}


TCalculator::~TCalculator()
{
}

int TCalculator::Priority(const char m) const
{
	switch (m)
	{
	case '(':
		return 0;
	case  '+':
		return 1;
	case  '-':
		return 1;
	case  '*':
		return 2;
	case  '/':
		return 2;
	case  '^':
		return 3;
	default:throw m;
	}
}

void TCalculator::ToPostfix()
{
	postfix = "";
	StackOperation.Clear();
	string tmp = "(" + infix + ")";
	for (int i = 0; i < tmp.size(); i++) 
	{
		if (tmp[i] == '(')
			StackOperation.Push(tmp[i]);
		if (tmp[i] >= '0'&& tmp[i] <= 9)
			postfix += tmp[i];
		if (tmp[i] == ')')
		{
			while (StackOperation.Top() == '(')
				postfix += StackOperation.Pop();
			StackOperation.Pop();
		}
		if (tmp[i] == '+' || tmp[i] == '-' || tmp[i] == '*' || tmp[i] == '/' || tmp[i] == '^')
		{
			postfix += ' ';
			while (Priority(tmp[i]) <= Priority(StackOperation.Top()))
			{
				postfix += StackOperation.Pop();
				//StackOperation.Push(tmp[i]); ///////////////////////////////////////////
			}
			StackOperation.Push(tmp[i]);
		}
	}
}

