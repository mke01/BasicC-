#include <cstring>
#include <iostream>
using namespace std;

int main()
{
	// String "Hello, World" is actually stored in constant
	// memory area.
	// In the following statement a copy of "Hello, World"
	// stored in constant memory is stored in array 'a'.
	char a[] = "Hello, World";

	// In the following statement, pointer b is made to point to
	// "Hello, World" string stored in constant memory area.
	// Note no copy is created here.
	char *b = "Hello, world";

	// Same as above. Note both pointers 'b' and 'c' contains
	// same address i.e. they point to same "Hello, World"
	// string stored in constant memory area.
	char *c = "Hello, World";

	a[0] = 'h'; // This expression works because changes are made
				// in the copy and not in "Hello, World" stored in
				// constant memroy.

	// b[0] = 'h'; // This throws unhandled exception because we
				// are attempting to make change to "Hello, World"
				// stored in constant memory area.

	int l = strlen(a); // Computes string length

	char dest[32];
	strcpy_s(dest, 32, a); // copies string on dest array

	// appends string to string which is already present in dest
	strcat_s(dest, 32, "C++ is fun"); 

	int n = strcmp(dest,"C++ is fun");

	return 0;
}