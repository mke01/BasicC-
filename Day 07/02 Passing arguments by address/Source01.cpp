void f(double *pn);

int main()
{
	double a = 1;
	f(&a);
	return 0;
}

void f(double *pn)
{
	*pn = 5;
}