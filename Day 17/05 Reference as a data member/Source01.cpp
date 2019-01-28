class X
{
public:
	X(int &u) : n(u)
	{
		n=5;
	}

private:
	int &n;
};

int main()
{
	int i=1;
	X a(i);
	return 0;
}