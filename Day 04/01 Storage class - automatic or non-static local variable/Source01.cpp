#include <iostream>
using namespace std;

void f()
{
	int n = 1; // The variable 'n' defined here is treated as local variable
			   // A local variable is not available outside the block in which
			   // it is defined.
	cout << n << endl;
}

int main()
{
	f();
	cout << n << endl;
	return 0;
}