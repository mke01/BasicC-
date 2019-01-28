struct Integer
{
	int n;
};

void SetN(Integer *const This, int value);

int main()
{
	Integer u;
	SetN(&u, 5);

	Integer v;
	SetN(&v, 15);

	return 0;
}

void SetN(Integer *const This, int value)
{
	Integer t;
	// This = &t; // such assignment is prohibited
	This->n = value;
}