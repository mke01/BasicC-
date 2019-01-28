class X;   //Forward Declaration of class

class Y
{
public:
	Y(X& a) : m_x(a)     // X& a = *this; X& m_x = a;
	{

	}

private:
	X& m_x;
};

class X
{
public:
	X() : v(*this)
	{

	}

private:
	Y v;
};

int main()
{
	X u;
}