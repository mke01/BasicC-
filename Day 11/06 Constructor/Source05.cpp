#include <iostream>
using namespace std;

class Circle
{
private:
	int r;
public:
	Circle()
	{
		this->r = 0;
	}

	Circle(int r)
	{
		SetR(r);
	}

	void SetR(int r)
	{
		if(r < 0)
			throw 1;
		this->r = r;
	}

	int GetR()
	{
		return this->r;
	}
};

int main()
{
	Circle c(1);
	Circle d;

	c.SetR(5);

	cout << c.GetR() << endl;

	return 0;
}

/*
Constructor overloading is possible.
Constructor is invoked for each object.
However it can be invoked for any object only once.
*/