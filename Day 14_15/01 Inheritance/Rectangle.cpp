#include <cmath>
#include "Rectangle.h"
#include "ConsoleAPI.h"
#include <iostream>
using namespace std;

Rectangle::Rectangle(const Point &fromPoint,
					 const Point &toPoint)
	: Shape(fromPoint, toPoint)
{

}

Rectangle::~Rectangle()
{

}

double Rectangle::GetArea() const
{
	int x1 = this->GetFromPoint().GetX();
	int y1 = this->GetFromPoint().GetY();
	int x2 = this->GetToPoint().GetX();
	int y2 = this->GetToPoint().GetY();
	double area = abs((x2-x1) * (y2-y1));
	return area;
}

void Rectangle::Draw() const
{
	int x1 = this->GetFromPoint().GetX();
	int y1 = this->GetFromPoint().GetY();
	int x2 = this->GetToPoint().GetX();
	int y2 = this->GetToPoint().GetY();

	ConsoleAPI::GotoXY(x1, y1);
	cout << (char) 218;

	ConsoleAPI::GotoXY(x2, y1);
	cout << (char) 191;
	
	ConsoleAPI::GotoXY(x1, y2);
	cout << (char) 192;

	ConsoleAPI::GotoXY(x2, y2);
	cout << (char) 217;

	for(int x = x1+1 ; x < x2; x++)
	{
		ConsoleAPI::GotoXY(x, y1);
		cout << (char) 196;

		ConsoleAPI::GotoXY(x, y2);
		cout << (char) 196;
	}

	for(int y = y1+1 ; y < y2; y++)
	{
		ConsoleAPI::GotoXY(x1, y);
		cout << (char) 179;

		ConsoleAPI::GotoXY(x2, y);
		cout << (char) 179;
	}
	std::cout<<endl;
}