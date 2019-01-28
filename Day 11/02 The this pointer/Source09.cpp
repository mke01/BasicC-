struct Integer
{
	int n;

	void SetN(int n)
	{
		Integer::n = n;
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
To resolve conflict between data member and
local variable/parameter sharing same name
we can use '::' scope resolution operator
as shown above.
*/