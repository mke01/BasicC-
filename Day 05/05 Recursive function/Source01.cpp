long factorial(int n)
{
	int i = 0, result = 1;
	for(i = n; i > 0; --i)
	{
		result *= i;
	}
	return result;
}

int main()
{
	long l = factorial(5);
	return 0;
}