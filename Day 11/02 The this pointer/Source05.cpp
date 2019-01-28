struct Integer
{
	int n;

	void SetN(int value)
	{
		Integer t;
		// This = &t; // such assignment is prohibited
		this->n = value;
	}
};

void SetN(Integer *const This, int value);

int main()
{
	Integer u;
	u.SetN(5);

	Integer v;
	v.SetN(15);

	return 0;
}

/*
In C++ a NON-STATIC member function automatically contains
the 'this' pointer. The 'this' is automatically set
to the address of an object on which respective
member function has been called.

Note the 'this' pointer is always a first parameter of
a  NON-STATIC member function. C++ compiler defines the
'this' pointer for your member function.
*/