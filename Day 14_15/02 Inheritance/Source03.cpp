#include<iostream>
using namespace std;

class Base
{
public:
	void f()
	{
		cout<<"Base :f"<<endl;
	}

	virtual void g()
	{
		cout<<"Base :g"<<endl;
	}
};

class Derived : public Base
{
public:
	void f()
	{
		cout<<"Derived :f"<<endl;
	}

	void g()
	{
		cout<<"Derived :g"<<endl;
	}
};

int main()
{
	Derived derived;

	Base *pbase = &derived;
	pbase->f();  // Base::f
	pbase->g();  // Derived::g

	Derived *pderived = &derived;
	pderived->f(); //Derived::f
	pderived->g(); //Derived::g

	return 0;
}


/*
While resolving call to non-virtual function, compiler
gives emphasis on the type of the pointer.

While resolving call to virtual function, compiler
gives emphasis on the type of the object that pointer is pointing to.

*/