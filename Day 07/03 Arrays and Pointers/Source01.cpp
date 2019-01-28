#include <iostream>
using namespace std;

#define SIZE 6

int main()
{
	int a[SIZE] = { 1, 2, 0, 4, 5, 0 };

	int *pa = nullptr; // pointer initialization
	
	pa = a; // pointer assignment

	// Array operator can be used with pointer to
	// access elements.
	// This expression assigns to a[2] element
	pa[2] = pa[0] + pa[1];

	pa = &a[3];

	// This expression assigns to a[5] element
	// because pa is now pointing to a[3] and not a[0].
	pa[2] = pa[0] + pa[1];

	return 0;
}