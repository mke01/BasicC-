#include <iostream>
using namespace std;

class Circle
{
private:
	int r;
public:
	Circle() // Non-parametric/Default Constructor
	{
		this->r = 0;
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
	Circle c;
	
	c.SetR(5);

	cout << c.GetR() << endl;

	return 0;
}

/*
A constructor is a special member function thats get
called automatically at the definition of the object
and it carries name same as class name.

For instantiation it is necessary that the constructor
should be non-private (i.e. public or protected).
*/