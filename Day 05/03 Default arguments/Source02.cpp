#include <stdint.h>

inline int min(int a, int b = INT32_MAX);

int main()
{
	int u = 1, v = 2, r = 0;
	r = u < v ? u : v;
	r = min(6); // r = min(6, INT32_MAX);
	r = min(5, 3);
	return 0;
}

inline int min(int a, int b)
{
	return a < b ? a : b;
}

/*
It's a good practice to set default agruments in
function prototype and not in function definition.

A redefinition error would happen if default argument
is mentioned in both prototype and definition.
*/