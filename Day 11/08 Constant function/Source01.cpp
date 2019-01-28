#include <iostream>
using namespace std;

class Circle
{
private:
	int r;
public:
	Circle(int r = 0)
	{
		this->SetR(r);
	}

	void SetR(int r)
	{
		if(r < 0)
			throw 1;
		this->r = r;
	}

	int GetR() const
	{
		//this->r = 5;
		return this->r;
	}

	// Operation
	double GetArea() const
	{
		return 3.14 * this->r * this->r;
	}
};

int main()
{
	const Circle c(1);
	cout << c.GetR() << endl;
	cout << c.GetArea() << endl;

	Circle d;
	cout << d.GetR() << endl;
	cout << d.GetArea() << endl;

	return 0;
}

/*
When a member function is suffixed with const keyword
the member function becomes a constant member function.

Such function can be called on constant as well as
non-constant objects.

A non-constant member function can only be invoked on
non-constant object.

Thus, it's strongly recommended to declare all 
getters(accessors) as constant member functions.

Only non-static member functions can be constant
member functions.

In other words, global or static member functions cannot
be constant member functions.
*/