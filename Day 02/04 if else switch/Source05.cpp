#include <iostream>
using namespace std;

void main()
{
	char op;
	int a = 0, b = 0;
	double result = 0.0;

	cout << "Input a: ";
	cin >> a;

	cout << "Input b: ";
	cin >> b;

	cout << "Input operator[+ - * /]: ";
	cin >> op;

	// Multiway conditional statement
	if('+' == op)
	{
		result = a + b;
	}
	else if('-' == op)
	{
		result = a - b;
	}
	else if('*' == op || 'x' == op || 'X' == op)
	{
		result = a * b;
	}
	else if('/' == op)
	{
		result = double(a) / b;
	}
	else
	{
		cout << "Invalid operator." << endl;
		return;
	}

	cout << "result = " << result << endl;
}