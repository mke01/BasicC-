int main()
{
	int u = 1;
	int v = 2;
	int const *p = nullptr; // this equivalent to
	// const int *p = nullptr;
	// Same as Source03.cpp

	u = 5;

	p = &u;

	*p = 10;

	p = &v;

	return 0;
}