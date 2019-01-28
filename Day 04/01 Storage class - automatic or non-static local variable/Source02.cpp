#include <iostream>
using namespace std;

void f()
{
	int n = 1;
	cout << n << endl;
	n = n + 1;
}

int main()
{
	f();
	f();
	f();
	return 0;
}

/*
non-static local variable characteristics:
Location: Stack frame
Lifetime: Functionwide
Scope: Blockwide
*/