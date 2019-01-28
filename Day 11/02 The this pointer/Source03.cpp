struct Integer
{
	int n;

	void SetN(Integer *const This, int value)
	{
		Integer t;
		// This = &t; // such assignment is prohibited
		This->n = value;
	}
};

void SetN(Integer *const This, int value);

int main()
{
	Integer u;
	u.SetN(&u, 5);

	Integer v;
	v.SetN(&v, 15);

	return 0;
}

/*
When we executed above program and stepped into
SetN function, we noticed presence of the 'this' pointer
besides the 'This' pointer.

Also we noticed that they both were containing same address
which were the addresses of corresponding objects 'u' and
'v'.
*/