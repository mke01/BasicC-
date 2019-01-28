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

	double GetArea() const
	{
		if(this->area < 0)
			this->area = 3.14 * this->r * this->r;
		return this->area;
	}
};

int main()
{
	const Circle c(1);
	cout << c.GetR() << endl;
	cout << c.GetArea() << endl;
	cout << c.GetArea() << endl;
	cout << c.GetArea() << endl;

	Circle d;
	cout << d.GetR() << endl;
	cout << d.GetArea() << endl;
	cout << d.GetArea() << endl;

	d.SetR(10);
	cout << d.GetArea() << endl;
	cout << d.GetArea() << endl;

	return 0;
}