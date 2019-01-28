#if !defined(POINT_H)
#define POINT_H

class Point
{
public:
	Point(int x, int y); 
public:
	int GetX() const;
	int GetY() const;
private:
	int x;
	int y;
public:
	static const Point origin;
};

#endif