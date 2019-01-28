#include <cmath>
#include "TextRectangle.h"
#include "ConsoleAPI.h"
#include <iostream>

using namespace std;

TextRectangle::TextRectangle(const Point &fromPoint,
					 const Point &toPoint, char *str)
	: Rectangle(fromPoint, toPoint), ptext(nullptr)
{
	int length = strlen(str);
	ptext = new char[length+1];

	strcpy_s(ptext, length+1, str);
}

TextRectangle::~TextRectangle()
{
	delete[] ptext;
	ptext = nullptr;
}

void TextRectangle::Draw() const
{
	Rectangle::Draw();
	int x1 = this->GetFromPoint().GetX();
	int y1 = this->GetFromPoint().GetY();
	int x2 = this->GetToPoint().GetX();
	int y2 = this->GetToPoint().GetY();
	int l = strlen(ptext);

	int x = abs((x1+x2-l) / 2);
	int y = abs((y1+y2) / 2);

	ConsoleAPI::GotoXY(x, y);
	cout <<ptext;
}