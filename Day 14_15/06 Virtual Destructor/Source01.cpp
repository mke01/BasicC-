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

	~Base()
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
In above program we noticed destructor call of derived class is getting missed and because of we are releasing
memory resource in derived destructor and the destructor is not taking place, the memory is getting leaked out.

Had the data member be scalar i.e. non-pointer then it doesn't cause memory leakage.
This means, the object space is not leaked out. It is resource which is consumed is leaked out.
*/