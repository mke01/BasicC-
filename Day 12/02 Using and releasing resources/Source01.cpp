#include <crtdbg.h>

class Integer
{
public:
	Integer(int n = 0);
	~Integer(); // this function is known as destructor
public:
	void SetN(int n);
	int GetN() const;
private:
	int *pn;
};

Integer::Integer(int n)
{
	pn = new int(n);
}

Integer::~Integer()
{
	delete pn;
	pn = nullptr;
}

void Integer::SetN(int n)
{
	*Integer::pn = n;
}

int Integer::GetN() const
{
	return *(this->pn);
}

int main()
{
	{
		Integer u(5);
		Integer v(6);
		Integer w(0);
	}

	_CrtDumpMemoryLeaks();

	return 0;
}

/*
Destructor is a special member function which is automatically
called before object is about to release.

We use destructor to release resources if acquired
during lifetime of an object.

Note merely writing an empty destructor doesn't release
resources. You need to write code that actually releases
resources.

For an object destructor is called once.

It is called for every object.

Destructor overloading is not possible.

*/