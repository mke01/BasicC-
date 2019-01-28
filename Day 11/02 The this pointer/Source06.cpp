struct Integer
{
	int n;

	void SetN(int value)
	{
		Integer t;
		this = &t; // such assignment is prohibited
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
C++ defines the 'this' pointer as a constant pointer.
Hence no assignment can be done to the 'this' pointer.
This maintains integrity of the 'this' pointer.
*/