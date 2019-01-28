#include "Shape.h"

Shape::Shape(const Point &fromPoint, const Point &toPoint)
	: fromPoint(fromPoint), toPoint(toPoint)
{
}

Shape::~Shape()
{
}

Point Shape::GetFromPoint() const
{
	return this->fromPoint;
}

Point Shape::GetToPoint() const
{
	return this->toPoint;
}

