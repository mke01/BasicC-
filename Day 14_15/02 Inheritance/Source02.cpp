#include<iostream>
using namespace std;

class Base
{
public:
	void g()
	{
		cout<<"Base"<<endl;
		this->m = 5;
	}
private:
	int m;
//public:
//	virtual void add();
};

class Derived:public Base
{
public:
	void g()
	{
		cout<<"Derived"<<endl;
		this->n = 5;
	}
private:
	int n;
};

int main()
{
	Derived derived;

	Base *pbase = nullptr;
	Derived *pderived = nullptr;

	pbase = &derived;
	pbase->g();

	pderived = &derived;
	pderived->g();

	return 0;
}

