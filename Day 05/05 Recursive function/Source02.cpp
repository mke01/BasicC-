long factorial(int n)
{
	if(n == 1)
		return 1;
	return n * factorial(n - 1);
}

int main()
{
	long l = factorial(4791);
	return 0;
}