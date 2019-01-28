#include <iostream>
using namespace std;

void f()
{
	static int n = 1;
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
static local variable characteristics:
Location: Static/Global data space
Lifetime: Application wide
Scope: Blockwide
*/