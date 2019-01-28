#if !defined(LINE_H)
#define LINE_H

#include "Shape.h"
#include "ConsoleAPI.h"
#include <iostream>
using namespace std;

class Line : public Shape
{
public:
	Line(const Point &fromPoint, const Point &toPoint);
	~Line();
public:
	double GetLength() const;

public:
	void Draw() const;

};

#endif