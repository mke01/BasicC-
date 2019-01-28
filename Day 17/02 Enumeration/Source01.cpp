#include<iostream>
using namespace std;

class InvalidColorValueException
{

};

class Rectangle
{
public:
	void Fill(int color);
};

// 0 : Black
// 1 : Red
// 2 : Green
// 4 : Blue

// Here int is very broad in nature where we can end up with invalid combination of color values
// if condition is evaluated at runtime which will consume some of processor's time
// To avoid such overhead try if we can do checks at compile time ?
// if it's limited checks then we can do at compile time using enumerations.

void Rectangle::Fill(int color)
{
	/*
	Following condition check is necessary, as only few values of color parameter 0-7 are actually
	meaningful to fill context.

	A User of this function officially can press any value between -2 billion to +2 billion, but
	we don't have colour mapping for all those values. Hence this condition check is required.
	For any color value outside 0-7 range, we raise exception.

	This check happens at runtime. So it will be bottle neck for those calls, where a valid color
	value has been passed.

	We therefore would prefer to perform this validation at compile time rather than runtime.
	*/
	if(color < 0  || color > 7)
		throw InvalidColorValueException();
}

int main()
{
	Rectangle r;

	r.Fill(0);
	r.Fill(7);
	r.Fill(8);  //Raises an exception
	
	return 0;
}