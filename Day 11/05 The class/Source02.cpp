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
	Circle c;

//	c.SetR(5);

	cout << c.GetR() << endl;

	c.SetR(-5); // Here program breaks due to exception

	return 0;
}

/*
class and its features are features of C++.
*/
