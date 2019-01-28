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
		Integer v = u;
	}

	_CrtDumpMemoryLeaks();

	return 0;
}

/*
When Integer v = u; statement is executed
we say it invokes a copy constructor.
The job of copy constructor is to construct 
new object using values of another object of same type.

When a class is written without a copy constructor,
we assume compiler provides one in the class.

Thus we say, copy constructor always exists in our class.

What the compiler supplied copy constructor does is
simply byte by byte copy. It therefore leads to shallow
copy.
*/