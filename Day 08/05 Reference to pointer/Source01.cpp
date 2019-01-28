void f(int **ptr);

int main()
{
	int *pi = nullptr;

	f(&pi);

	delete pi;
	pi = nullptr;

	return 0;
}

void f(int **ptr)
{
	*ptr = new int;
}