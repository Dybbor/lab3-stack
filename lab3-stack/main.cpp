#include <iostream>
#include "Stack.h"
#include "..\CLR_12\Project3\TCalculator.h"
using namespace std;
bool Check(string str) 
{
	TStack <char> st(10);
	
	for (int i = 0; i < str.length(); i++)
		if (str[i] == '(')
			st.Push(str[i]);
		else if (str[i] == ')')
		{
			if (st.IsEmpty())
				return false;
			else
				st.Pop();
		}
	if (st.IsEmpty())
		return true;
	else
		return false;
}
void main()
{
	setlocale(LC_ALL, "Russian");
	string str = "He(((llo)wor)ld))";
	cout << Check(str) << endl;
	TCalculator tcal;
	while (1)
	{
		try {
			tcal.SetInfix();
			if (tcal.CheckBrackets() == 0)
				throw 0;
			if (tcal.CheckOperator() == 0)
				throw 0;
			tcal.ToPostfix();
			cout << tcal.GetPostfix() << endl;;
			cout <<"Ответ: "<< tcal.Calculator() << endl;
		}
		catch (int k) 
		{
			cout << "Неправильно введены данные" << endl;
		}
		system("pause");
		system("cls");
	}

	system("pause");
}

