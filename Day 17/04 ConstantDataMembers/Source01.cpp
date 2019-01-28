class X
{
public:
	X() //: n(1)
	{
		n =1;
	}

private:
	int &n;
};

int main()
{
	X a;
	return 0;
}

/* 
In this program class X is declared with constant data member. Initiliazation of constant data member
is mandatory. We use constructor initialization list to achieve same. Note value assignment to data member
in constructor body is not an initializer but assignment.

Initialization happens only in initialization list.

*/