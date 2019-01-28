#include<iostream>
#include<crtdbg.h>
using namespace std;

class A
{
public:
	void f();
};

void A::f()
{
}

// Name : Factory Function
// Arguments : No Arguments
// return type : Particular type of object you require to be produced by factory.
//				Factory can produce any number of objects where memory is the limit

A* CreateObject()
{
	return new A;
}

int main()
{
	// Calling factory function to create object
	A *pa = CreateObject();

	pa->f();
	delete pa;
	pa = nullptr;
	
	_CrtDumpMemoryLeaks();

	return 0;
}


/*

*/