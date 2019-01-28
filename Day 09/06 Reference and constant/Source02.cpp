void f(int &r)
{
}

void g(const int &cr)
{
}

int main()
{
	int a = 1;
	const int b = 5;

	f(a);
	f(b);

	g(a);
	g(b);

	return 0;
}