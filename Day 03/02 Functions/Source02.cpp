#include <iostream>
using namespace std;

// Function definition
// Function definition = Function header + Function body
// u and v in following code are known as parameters
void add(int u, int v)	// Function header
{   // Function Body
	int w = 0;

	w = u + v;

	cout << "The sum is " << w << endl;
}

void main()
{
	int a = 0, b = 0;

	cout << "Enter first number: ";
	cin >> a;

	cout << "Enter second number: ";
	cin >> b;

	// a and b in following function call is known as arguments
	add(a, b); // Function call
}