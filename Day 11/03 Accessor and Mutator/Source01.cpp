#include <iostream>
using namespace std;

struct Circle
{
	int r;

	void SetR(int r) // Mutator
	{
		if(r < 0)
			throw 1;
		this->r = r;
	}

	int GetR() // Accessor
	{
		return this->r;
	}
};

int main()
{
	Circle c;

	c.SetR(5);

	cout << c.GetR() << endl;

	c.SetR(-5); // Here program breaks due to exception

	return 0;
}