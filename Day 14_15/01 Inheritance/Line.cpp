#include <cmath>

#include "Line.h"

Line::Line(const Point &fromPoint, const Point &toPoint)
	: Shape(fromPoint, toPoint)
{
}

Line::~Line()
{
}

double Line::GetLength() const
{
	int x1 = this->GetFromPoint().GetX();
	int y1 = this->GetFromPoint().GetY();
	int x2 = this->GetToPoint().GetX();
	int y2 = this->GetToPoint().GetY();
	double length = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
	return length;
}

void Line::Draw() const
{
	int x1 = this->GetFromPoint().GetX();
	int y1 = this->GetFromPoint().GetY();
	int x2 = this->GetToPoint().GetX();
	int y2 = this->GetToPoint().GetY();

	ConsoleAPI::GotoXY(x1, y1);
	cout << "*";

	ConsoleAPI::GotoXY(x2, y2);
	cout << "*";

	cout<<endl;
}