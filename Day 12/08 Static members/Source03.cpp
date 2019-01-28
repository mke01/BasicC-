class X
{
public:
	void f()
	{
		u = 1;
		v = 1;
	}

	static void g()
	{
		u = 1;
		v = 1;
	}
private:
	int u;
	static int v;
};

int X::v;

int main()
{
	return 0;
}