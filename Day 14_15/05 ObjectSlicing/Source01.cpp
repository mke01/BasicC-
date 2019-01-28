#include<iostream>

using namespace std;

class Base
{
public:
	Base(int base=0)
	{
		this->base = base;
	}

public:
	virtual void f()
	{

	}
private:
	int base;
};

class Derived: public Base
{
public:
	Derived(int base=0, int derived=0):Base(base), derived(derived)
	{
	}
public:
	void f()
	{

	}
private:
	int derived;
};

int main()
{
	Derived derived(5,10);

	Base *pbase = &derived;
	Base &rbase = derived;
	Base base = derived;

	pbase->f();
	rbase.f();
	base.f();

	return 0;
}