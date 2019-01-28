#include <cmath>

class Point
{
public:
	Point(int x, int y) : x(x), y(y) 
	{
	}
	Point(const Point &point)
		: x(point.x), y(point.y)
	{
	}
	~Point()
	{
	}
public:
	int GetX() const { return this->x; }
	int GetY() const { return this->y; }
private:
	int x;
	int y;
};

class Line
{
public:
	Line(const Point &fromPoint, const Point &toPoint)
		: fromPoint(fromPoint), toPoint(toPoint)
	{
	}
	~Line()
	{
	}
public:
	double GetLength() const;
private:
	Point fromPoint;
	Point toPoint;
};

double Line::GetLength() const
{
	int x1 = fromPoint.GetX();
	// int x1 = fromPoint.x; // this is not possible
	// because 'x' is private in Point class.
	// Refer notes for additional information.
	int y1 = fromPoint.GetY();
	int x2 = toPoint.GetX();
	int y2 = toPoint.GetY();
	double length = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
	return length;
}

int main()
{
	Point p(1, 1), q(4, 5);
	Line l(p, q);
	double len = l.GetLength();
	return 0;
}

/*
This program illustrates composition relationship
between two classes viz. Line and Point.

In composition, an object of one class is a part
of an object of another class. For ex. fromPoint and
toPoint in Line class.

Composition is also known as Whole-Part or Has-A
relationship.

While constructing whole object first constructors of
part objects are executed and then constructor of
whole object is executed.

Destructor calls always being opposite of constructors
calls, destructor of whole is executed first and then
parts.

Whole object can access only public inteface of part
objects i.e. whole object doesn't have direct access
to part object's private members.
*/