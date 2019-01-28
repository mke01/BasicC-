#include <iostream>
using namespace std;

class InvalidRadius
{
public:
	int getErrorNumber()
	{
		return 1;
	}
	char* getErrorMessage()
	{
		return "Radius cannot be -ve";
	}
};

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
		{
			throw InvalidRadius();
		}
		this->r = r;
	}

	int GetR() const
	{
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
	try
	{
		Circle c(1);
		c.SetR(-5);
	}
	catch(int e)
	{
		if(e==1)
			cout<<"Radius cannot be negative "<<endl;
	}
	catch(InvalidRadius &r)
	{
		cout<<"Error no = "<<r.getErrorNumber()<<endl;
		cout<<"Error message = "<<r.getErrorMessage()<<endl;
	}
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