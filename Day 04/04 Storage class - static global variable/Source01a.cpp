#include <iostream>
using namespace std;

static int n = 1;

void f();

int main()
{
	f();
	cout << n << endl;
	f();
	cout << n << endl;
	f();
	cout << n << endl;
	return 0;
}

/*
static global variable characteristics:
Location: Global data space
Lifetime: Application wide
Scope: File wide
*/