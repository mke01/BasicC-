int main()
{
	int u = 1;
	int v = 2;
	const int * const p = nullptr;

	u = 5;

	p = &u;

	*p = 10;

	p = &v;

	return 0;
}