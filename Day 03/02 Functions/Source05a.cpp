#include <iostream>
using namespace std;

#include "functions.h"

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