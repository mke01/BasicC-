#include <iostream>
using namespace std;

#define SIZE 6
void g(int pa[]);

int main()
{
	int a[SIZE] = { 1, 2, 0, 4, 5, 0 };
	
	// Following formula computes number of elements
	// present in 'a' array.
	// This formula works reliably in a function
	// in which array is defined.
	// It doesn't work with a function to which
	// array has been passed as an argument.
	// Hence we need to pass additionaly an integer which
	// indicates how many elments have been passed to
	// that function.
	int n = sizeof(a) / sizeof(int);
	
	g(a);
		
	g(&a[3]);

	return 0;
}

void f(int *pa) // int *pa = a
{
	*(pa + 2) = *pa + *(pa + 1);
}

void g(int pa[]) // int *pa = a
{
	// This formula doesn't compute number of elements
	// passed to this function in 'pa'.
	int n = sizeof(pa) / sizeof(int);
	*(pa + 2) = *pa + *(pa + 1);
}