#include<iostream>
using namespace std;

class Keyboard
{
public:
	Keyboard()
	{
		cout << "Constructing the Keyboard." << endl;
	}
	~Keyboard()
	{
		cout << "Destructing the Keyboard." << endl;
	}
};

class CPU
{
public:
	CPU()
	{
		cout << "Constructing the CPU." << endl;
	}
	~CPU()
	{
		cout << "Destructing the CPU." << endl;
	}

public:
	void Connect(Keyboard* pkeyboard)
	{
		m_pkeyboard = pkeyboard;
	}

	Keyboard* m_pkeyboard;
};

int main()
{
	{
		CPU mycpu;
		Keyboard kbd;
		mycpu.Connect(&kbd);
	}
}

/*
When two objects are related to each other at surface level, then that relationship 
is typically called as aggregation.

In C++ aggregation is created using a pointer or a reference.

The aggregated object(kbd) doesn't consume any space inside aggregate object(mycpu). 
It remains outside the aggregate object.

The constructor order is not so important in aggregation. Its because, in aggregation 
its not important that whether aggregated object comes first or aggregate object. It 
can be either way. Its however essential that at their connection point both are 
constructed.

Like composition aggregate function can access only public interface of aggregated 
object.
*/