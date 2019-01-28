struct Integer
{
	int n;

	void SetN(Integer *const This, int value)
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
	u.SetN(&u, 5);

	Integer v;
	v.SetN(&v, 15);

	return 0;
}

/*
In this program we replaced 'This' with 'this'.
When executed we observed the behaviour remained same
i.e. n of u and n of v was updated with respective value.
*/