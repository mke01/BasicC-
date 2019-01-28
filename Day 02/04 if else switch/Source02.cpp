#include <iostream>
using namespace std;

void main()
{
	int a = 0, b = 0,  c = 0;

	cout << "Input a: ";
	cin >> a;

	cout << "Input b: ";
	cin >> b;

	if(a < b)
	{
		c = a;
	}
	else
	{
		c = b;
	}

	cout << "The min out of " << a << " and " << b <<
		" is " << c << endl;
}