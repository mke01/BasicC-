#if !defined(TEXTRECTANGLE_H)
#define TEXTRECTANGLE_H

#include "Rectangle.h"

class TextRectangle : public Rectangle
{
public:
	char *ptext;

public:
	TextRectangle(const Point &fromPoint, const Point &toPoint, char *str);
	~TextRectangle();

public:
	void Draw() const;
};

#endif