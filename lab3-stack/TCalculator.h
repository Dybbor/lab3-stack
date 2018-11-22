#pragma once
#include <iostream>
#include <string>
#include "Stack.h"

using namespace std;

class TCalculator
{
private:
	string infix, postfix;
	TStack <char> StackOperation;
	TStack <double> StackNumber;
	int Priority(const char m) const;
	void ToPostfix();
public:
	void SetInfix();
	string GetPostfix();
	TCalculator();
	~TCalculator();
};


