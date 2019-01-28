#include <iostream>
using namespace std;

void main()
{
	int a = 0, b = 0, c = 0, d = 0;

	cout << "Input a: ";
	cin >> a;

	cout << "Input b: ";
	cin >> b;

	cout << "Input c: ";
	cin >> c;

	/* nested if..else */ 
	if(a < b)
	{
		if(a < c)
		{
			d = a;
		}
		else
		{
			d = c;
		}
	}
	else
	{
		if(b < c)
		{
			d = b;
		}
		else
		{
			d = c;
		}
	}

	cout << "The min out of " << a << ", " << b
		 << " and " << c << " is " << d << endl;
}