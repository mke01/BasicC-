class Integer
{
public:
	Integer(int n = 0);
public:
	void SetN(int n);
	int GetN() const;
public:
	Integer operator+(const Integer &integer);
private:
	int n;
};

Integer::Integer(int n)
	: n(n)
{
}

void Integer::SetN(int n)
{
	Integer::n = n;
}

int Integer::GetN() const
{
	return this->n;
}

Integer Integer::operator+(const Integer &integer)
{
	Integer t(0);
	t.n = this->n + integer.n;
	return t;
}

int main()
{
	Integer u(5);
	Integer v(6);
	Integer w(0);

	w = u + v;
	
	return 0;
}