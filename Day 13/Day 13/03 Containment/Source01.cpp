class X
{

};

class Y
{
public:
	Y(X& a): m_x(a)
	{
		
	}

private:
	X& m_x;
};

int main()
{
	X u;
	Y v(u);
}

/*
In order to initialize a member of a class, we need to use initialization list.
Constructor definition enables us to write assignments to members. It is not 
initialization.

If a class contains reference or constant data member, then it needs initialization 
which we do using initialization list.
*/