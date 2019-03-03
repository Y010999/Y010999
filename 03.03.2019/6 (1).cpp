#include <iostream>
#include <stack>
#include <string>
using namespace std;
bool Brackets(char op, char cls)
{
	if (op == '(' && cls == ')') return true;
	else if (op == '[' && cls == ']') return true;
	else if (op == '{' && cls == '}') return true;
	return false;
}
bool f(string b)
{
	stack<char> A;
	for (int i = 0; i < b.length(); i++)
	{
		if (b[i] == '(' || b[i] == '{' || b[i] == '[')
			A.push(b[i]);
		else if (b[i] == ')' || b[i] == '}' || b[i] == ']')
		{
			if (A.empty() || !Brackets(A.top(), b[i]))
				return false;
			else
				A.pop();
		}
	}
	return A.empty();
}
int main()	{	
	string c;
	cin >> c;
	if (f(c))
		cout << "Balanced" << endl;
	else
		cout << "Not balanced." << endl;
	return 0;
}
