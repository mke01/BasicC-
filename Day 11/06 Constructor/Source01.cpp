#include <iostream>
using namespace std;

class Circle
{
private:
	int r;
public:
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
	Circle c = { 0 }; // This syntax for
	// initialization of data member doesn't
	// work because, the data member is private.
	
	c.SetR(5);

	cout << c.GetR() << endl;

	c.SetR(-5); // Here program breaks due to exception

	return 0;
}