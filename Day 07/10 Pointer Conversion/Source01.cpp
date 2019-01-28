#include<iostream>
using namespace std;

int main()
{
	int a = 1;
	int *p = &a;

	void *q = p; // Pointer conversion from specific (int*)
	//to generic  (void *). This happens implicitly

	//*q;  // Dereferencing of generic pointer is not possible.
	//q++; // Pointer arithmetic is also not possible

	int *r = (int*)q; //pointer conversion from generic to specific doesn't happen implicitly.
	// Explicit cast is necessary
	return 0;
}