#include <iostream>
using namespace std;

class Point
{
private:
	int x;
	int y;
public:
	Point()	: x(0), y(0)
	{
		// this->x = 0; // Though this assignment is
		// acceptable we prefer initilization of x and y
		// through initialization list
	}

	Point(int x, int y) : x(x), y(y)
	{
	}

	void SetX(int x) 
		// : x(x) // Initialization list is available with constructor only
	{
		this->x = x;
	}

	void SetY(int y)
	{
		this->y = y;
	}
};

int main()
{
	Point origin;
	Point p(5, -6);
	return 0;
}