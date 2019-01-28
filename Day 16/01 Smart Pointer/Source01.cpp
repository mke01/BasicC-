#include<crtdbg.h>

class A
{
public:
	void g()
	{

	}
};

class SP
{
public:
	SP(A *pa) : pa(pa)
	{

	}
	A* operator->()
	{
		return pa;
	}
	~SP()
	{
		delete pa;
	}

private:
	A *pa;
};

int main()
{
	{
		SP ptr(new A);
		/*A *pa = ptr.f();
		pa->g();*/
		// ptr.f()->g();

		//ptr.operator->()->g(); // f is replaced by operator->

		ptr->g(); // same as above expression
	}

	_CrtDumpMemoryLeaks();
	return 0;
}

/*
A smart pointer actually is not a pointer. It's an object of a class(SP) which manages lifetime of
an object of some other class (A) allocated on heap.

Thus the user of smart pointers need not worry about releasing resources. When smart pointer object goes out of scope,
destructor gets called upon which endup clearing resources
*/