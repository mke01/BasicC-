#include "Point.h"
#include "Line.h"
#include "Rectangle.h"
#include "Shape.h"
#include "TextRectangle.h"

int main()
{
	Point p(10, 10), q(20, 15);
	Line l(p, q);
	double len = l.GetLength();
	Point tempPoint = l.GetFromPoint();
	// Due to inheritance All members of base class are inherited in derived class. Their access n base class
	// decide which out of them are actually accessible.
	// Refer "Access matrix in inheritance" in notes for further information.

	Point s(40, 10), t(70, 15);
	Rectangle r(s, t);
	double area = r.GetArea();
	r.Draw();
	Point u(40, 20), v(70, 25);
	TextRectangle tr(u,v,"ok");
	// tr.Draw();

	Shape *pshape = &tr;
	pshape->Draw();

	/*Rectangle *rect = &tr;
	rect->Draw();
*/
	/*TextRectangle *trect = &tr;
	trect->Draw();*/

	l.Draw();

	return 0;
}

/*
Constructor and destructor order of execution:
----------------------------------------------
In inheritance base class constructor is executed before
derived class constructor. Destructor calls are always executed
in opposite order of constructor calls. Hence derived class
destructor is executed before base class destructor. In
short it looks as follows:

Constructor calls:
Base constructor
Derived constructor

Destructor calls:
Derived destructor
Base destructor

Accessing base members:
-----------------------
Derived class members cannot access private members of
base class directly. It can access public members directly.
A derived class can also access protected members of
base class. Its a good practice to be conservative about
protected access. Avoid data members of base class to be
protected. They should always be private. If at all
we want to declare protected, it should be member function
of base class.

Note protected data members lead to tight coupling. 
Private data members lead to loose coupling.

Access matrix in Inheritance
------------------------------------------------------------|
Base members 	|						Accessible to
access			|    Self   |   Derived		|   Non-Members-|
----------------|-------------------------------------------|
public			|	Yes		|   Yes			|	Yes
----------------|-------------------------------------------|
protected		|	Yes		|   Yes			|	No
----------------|-------------------------------------------|
private			|	Yes		|   No			|	No
----------------|-------------------------------------------|
*/