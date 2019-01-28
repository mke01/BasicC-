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

int main()
{
	{
		Integer u(5);
		Integer v = u;
	}

	_CrtDumpMemoryLeaks();

	return 0;
}