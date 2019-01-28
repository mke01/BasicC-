class Base
{
//public:
//	virtual void add();
};

class Derived:public Base
{
};

int main()
{
	Base base, *pbase = nullptr;
	Derived derived, *pderived = nullptr;

	pbase = &base;

	pderived = &derived;

	pbase = &derived;

	pderived = dynamic_cast<Derived*>(&base);
}

/*
This program shows that 
- a base pointer can point to it's own object or derived object
- a derived pointer can point to its own object only

In othr words it also shows that a derived object can be accessed 
through a base or derived pointer

A base object however can be accessed only through base pointer
*/