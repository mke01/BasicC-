#if !defined(RECTANGLE_H)
#define RECTANGLE_H

#include "Shape.h"

class Rectangle : public Shape
{
public:
	Rectangle(const Point &fromPoint, const Point &toPoint);
	~Rectangle();
public:
	double GetArea() const;
public:
	void Draw() const;
};

#endif