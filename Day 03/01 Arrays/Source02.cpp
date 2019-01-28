void main()
{
	// Here number of initializers are same in number
	// as that of number of elements in array 'a'.
	// Hence initializers are assigned on, one on one basis.
	int a[5] = { 1, 2, 3, 4, 5 };

	// If number of intializers are less than number of
	// elements then those elements for which initializers are
	// missing are set to 0 value.
	int b[5] = { 1, 2, 3 };

	// If number of intializers are more than number of
	// elements then its a syntax error.
	// int c[5] = { 1, 2, 3, 4, 5, 6 };

	// All elements are set to 0.
	// It could be considered as a quick syntax to set all
	// elements to 0.
	int d[5] = { 0 };

	// Only first element is set to 1, rest elements are set to 0.
	// Thus, its not a quick syntax to set all elements to 1.
	int e[5] = { 1 };

	// Double dimension array.
	int f[2][3] = { {1, 2, 3}, {4, 5, 6} };
	int g[2][3] = { 1, 2, 3, 4, 5, 6 };
}