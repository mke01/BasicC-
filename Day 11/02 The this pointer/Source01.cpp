struct Integer
{
	int n;
};

void SetN(Integer *This, int value);

int main()
{
	Integer u;
	SetN(&u, 5);

	Integer v;
	SetN(&v, 15);

	return 0;
}

void SetN(Integer *This, int value)
{
	This->n = value;
}