#include <iostream>
using namespace std;

struct Point
{
	int x;
	int y;
};

void Print(Point point);
void Print(const Point *ppoint);

int main()
{
	Point p1 = { 2, 7 };
	Print(p1);
	Print(&p1);
}

void Print(Point point)
{
	cout << "x = " << point.x << ", ";
	cout << "y = " << point.y << endl;
}

void Print(const Point *ppoint)
{
	cout << "x = " << ppoint->x << ", ";
	cout << "y = " << ppoint->y << endl;
}

/*
This program illustrates passing structure variable by address
actually conserves memory than passing same by value.
*/

