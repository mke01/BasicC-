#include<iostream>
using namespace std;

class A
{
public:
	void f();
};

void A::f()
{
}

int main()
{
	// Simple way of creating object
	A *pa = new A;

	pa->f();
	delete pa;
	pa = nullptr;
	
	return 0;
}