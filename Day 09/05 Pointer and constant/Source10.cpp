void f(int *p)
{
}

void g(const int *p) // g becomes more versatile than f
{
}

int main()
{
	int u = 1;
	const int v = 2;

	f(&u); // accepts address of non-const variable
	f(&v); // doesn't accept address of const variable

	g(&u); // accepts address of non-const variable
	g(&v); // accepts address of const variable

	return 0;
}