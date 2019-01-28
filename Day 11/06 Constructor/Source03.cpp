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
	
	c.Circle(); // Constructor cannot be called explicitly

	c.SetR(5);

	cout << c.GetR() << endl;

	return 0;
}