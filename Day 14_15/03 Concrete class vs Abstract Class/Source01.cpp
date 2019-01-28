#include<iostream>

using namespace std;

class Base
{
public:
	virtual void f()
	{}

	void g()
	{}

};

class Derived:public Base
{

public:
	void f()
	{

	}
	void g()
	{

	}
};

int main()
{
	Base base, *pbase = nullptr;
	Derived derived;

	pbase = &base;
	pbase->f();
	pbase->g();

	pbase = &derived;
	pbase->f();
	pbase->g();

	return 0;
}

/*
A class which can be instantiated is known as concrete class.

*/