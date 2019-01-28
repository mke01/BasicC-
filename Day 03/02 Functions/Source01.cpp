#include <iostream>
using namespace std;

// Function definition
// Function definition = Function header + Function body
void add()	// Function header
{   // Function Body
	int a = 0, b = 0, c = 0;

	cout << "Enter first number: ";
	cin >> a;

	cout << "Enter second number: ";
	cin >> b;

	c = a + b;

	cout << "The sum is " << c << endl;
}

void main()
{
	add(); // Function call
	add();
}