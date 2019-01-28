#if !defined(SHAPE_H)
#define SHAPE_H

#include "Point.h"

class Shape
{
public:
	Shape(const Point &fromPoint = Point::origin, 
		const Point &toPoint = Point::origin);
	// virtual Destructor. Why we declare ~Shape as virtual destructor ?
	// Since this is parent class
	virtual ~Shape();
public:
	Point GetFromPoint() const;
	Point GetToPoint() const;
public:
	virtual void Draw() const=0;

private:
	Point fromPoint;
	Point toPoint;
};

#endif