#include <iostream>
using namespace std;

class Circle
{
private:
	int r;
public:
	Circle(int r) // Parametric Constructor
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

	c.SetR(5);

	cout << c.GetR() << endl;

	return 0;
}