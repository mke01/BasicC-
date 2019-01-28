#include "Point.h"

const Point Point::origin(0, 0);

Point::Point(int x, int y) : x(x), y(y)
{
}

int Point::GetX() const
{
	return this->x;
}

int Point::GetY() const
{
	return this->y;
}