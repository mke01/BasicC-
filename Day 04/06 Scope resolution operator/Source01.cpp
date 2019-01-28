#include <iostream>
using namespace std;

int i = 1;

int main()
{
	int i = 2;

	cout << i << endl; // prints value of local i.
	// when global and local variables conflict in their names,
	// local variable takes precedence over global variable.

	cout << ::i << endl; // :: is known as scope resolution operator
	// It is used to access symbol defined in global space.

	return 0;
}