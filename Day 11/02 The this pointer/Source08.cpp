struct Integer
{
	int n;

	void SetN(int n)
	{
		this->n = n;
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
When parameter and data member share same name,
then parameter takes precedence over data member.
So if we want to access data member, we need to
make use of the 'this' pointer.
*/