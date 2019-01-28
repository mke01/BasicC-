#include <crtdbg.h>

class Integer
{
public:
	Integer(int n = 0);
	Integer(const Integer &integer);
	~Integer(); // this function is known as destructor
public:
	void SetN(int n);
	int GetN() const;
public:
	Integer& operator=(const Integer &integer);
private:
	int *pn;
};

Integer::Integer(int n)
{
	pn = new int(n);
}

Integer::Integer(const Integer &integer)
{
	this->pn = new int;
	*this->pn = *integer.pn;
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

Integer& Integer::operator=(const Integer &integer)
{
	*this->pn = *integer.pn;
	return *this;
}

int main()
{
	{
		Integer u(5);
		Integer v(6);
		v = u;
	}

	_CrtDumpMemoryLeaks();

	return 0;
}

/*
If a class contains pointer as its member, then
it is strongly recommended to write copy constructor and
overload assignment operator  which do deep copy.

If class contains only scalar members then deep copy
is not necessary, thus copy constructor, overloading
assignment operator is not essential.
*/