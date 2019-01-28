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
We can simulate presence of multiple constructors
by making use of default arguments to parametric
constructor.

For ex. in above program Circle class simulates
presence of default and parametric constructors.
*/