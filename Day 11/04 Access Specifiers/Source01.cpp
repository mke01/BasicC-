#include <iostream>
using namespace std;

struct Circle
{
private:
	int r;
public:
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

	//c.SetR(-5); // Here program breaks due to exception

	c.r = -5; // r is a private data member hence
	// direct access is prohibited

	return 0;
}

/*
Above program incroduces two access specifiers viz.
private and public.

These access specifiers help build encapsulation
phenomenon.
*/