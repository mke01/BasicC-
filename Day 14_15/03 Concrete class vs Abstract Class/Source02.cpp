#include<iostream>

using namespace std;

class Base
{
public:
	virtual void f()=0; //pure virtual function or abstract method

	void g()
	{}

};

class Derived:public Base
{

public:
	void f()
	{

	}
	//We should not override g in derived class because it's non-virtual function in Base class

	//void g()
	//{

	//}
};

int main()
{
	//Base base;
	Base *pbase = nullptr;
	Derived derived;

	/*pbase = &base;
	pbase->f();
	pbase->g();*/

	pbase = &derived;
	pbase->f();
	pbase->g();

	return 0;
}

/*
A class which cannot be instantiated is known as abstract class.

If a class is derived from abstract class, then for derived class to be concrete, it has to implement all
abstract functions of base class. 
If even a single abstract function is left out, the derived class autimatically becomes abstract class.

Function oveeriding makes sense for virtual or pure virtual functions. It makes no sense for non-virtual functions.
Hence non-virtual functions must never be overriden.

When you see a base class written with mixture of virtual and non-virtual functions then regarding virtual
functions you should assume as if author of base class is ok if you override them. For non-virtual functions you should
assume that author doesn't want you to override them in the derived class.

*/