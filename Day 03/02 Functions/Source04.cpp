#include <iostream>
using namespace std;

int add(int u, int v); // Function declaration or function prototype

void main()
{
	int a = 0, b = 0, c = 0;

	cout << "Enter first number: ";
	cin >> a;

	cout << "Enter second number: ";
	cin >> b;

	c = add(a, b);

	cout << "The sum is " << c << endl;
}

int add(int u, int v)
{
	int w = 0;

	w = u + v;

	return w;
}