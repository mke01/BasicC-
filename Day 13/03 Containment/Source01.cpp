#include <cmath>

class Line
{
public:
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
public:
	Line(const Point &fromPoint, const Point &toPoint)
		: pfromPoint(nullptr), ptoPoint(nullptr)
	{
		this->pfromPoint = new Point(fromPoint);
		this->ptoPoint = new Point(toPoint);
	}
	~Line()
	{
		delete this->pfromPoint; this->pfromPoint = nullptr;
		delete this->ptoPoint; this->ptoPoint = nullptr;
	}
public:
	double GetLength() const;
private:
	Point *pfromPoint;
	Point *ptoPoint;
};

double Line::GetLength() const
{
	int x1 = this->pfromPoint->GetX();
	int y1 = this->pfromPoint->GetY();
	int x2 = this->ptoPoint->GetX();
	int y2 = this->ptoPoint->GetY();
	double length = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
	return length;
}

int main()
{
	Line::Point p(1, 1), q(4, 5);
	Line l(p, q);
	double len = l.GetLength();
	return 0;
}

/*
This program illustrates aggrgation relationship
between two classes viz. Line and Point.

In aggregation, an object of one class is connected to
an object of another class through a pointer or a
reference. For ex. Point object connected to line
object 'l' through pfromPoint pointer.

Aggregation is also known as Whole-Part or Has-A
relationship.

In case of aggregation order of constructor and destructor
calls is not so important.

Whole object can access only public inteface of part
objects i.e. whole object doesn't have direct access
to part object's private members. This is valid in
aggregation as well.
*/