struct Integer
{
	int n;

	void SetN(int value)
	{
		n = value;
	}
};

int main()
{
	Integer u;
	u.SetN(5);

	Integer v;
	v.SetN(15);

	return 0;
}

/*
Reference of the 'this' pointer inside NON-STATIC
member function is optional.

Thus though it is optional, for better clarity purpose
it is a good practice to access members using
the 'this' pointer mentioned explicitly.
*/