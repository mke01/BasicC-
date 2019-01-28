#include<iostream>
using namespace std;

class IMyInterface
{
public:
	virtual void f() = 0;
	virtual void g() = 0;
};

class Derived : public IMyInterface
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
	Derived derived;
	IMyInterface *ptr = &derived;

	ptr->f();
	ptr->g();

	return 0;
}

/*
When a class contains only public pure virtual functions then such class is known as Interface class.

An interface class is an abstract class but an abstract class is not an interface.

The purpose of interface class is not to provide any implementation to its derived class (that support may be
left to abstract or concrete base class) but to provide interface to derived class.

In Microsoft, interfaces are typically prefixed with letter 'I', in other systems it may not be prefixed
with any such letter/phrase. In CAA, interfaces are prefixed with phrase 'CATI'.

It's virtual function which exhibits polymorphic behaviour, so no class and no base class pointer

*/