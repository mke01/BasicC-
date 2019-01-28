#include <crtdbg.h>
#include<iostream>
using namespace std;

class Base
{
public:
	Base()
	{
		cout<<"Base Constructor"<<endl;
	}

	virtual ~Base()
	{
		cout<<"Base Destructor"<<endl;
	}
};

class Derived:public Base
{
	char *p;
public:
	Derived()
	{
		p = new char;
		p[0] = 'a';
		cout<<"Derived Constructor"<<endl;
	}

	~Derived()
	{
		delete p;
		p=nullptr;
		cout<<"Derived Destructor"<<endl;
	}
};
 
int main()
{
	Base *pbase = new Derived;
	delete pbase;
	pbase = nullptr;

	_CrtDumpMemoryLeaks();
	return 0;
}

/*
If a class going to act as a base class then it is strongly recommended to write virtual destructor in
such class, even though there may not be any code to write in it.
*/