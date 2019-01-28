#include <iostream>
using namespace std;

class Circle
{
private:
	int r;
	mutable double area;
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
		area = -1;
	}

	int GetR() const
	{
		return this->r;
	}

	double GetArea() const;

};

double Circle::GetArea() const
{
	if(this->area < 0)
		this->area = 3.14 * this->r * this->r;
	return this->area;
}

int main()
{
	Circle c(1);
	int r = c.GetR();
	double a = c.GetArea();
	return 0;
}

/*
When member functions are defined within class
they are inline by default.

When member functions are defined outside the class
they are not inline by default.
*/