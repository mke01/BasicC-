int i = 1;

void f(int **p)
{
	*p = &i;
}

int main()
{
	int *p = nullptr;

	f(&p);

	return 0;
}