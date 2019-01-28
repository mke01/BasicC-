#include <time.h>

class RandomGenerator
{
public:
	static int random(int lbound, int ubound);
};

int RandomGenerator::random(int lbound, int ubound)
{
	static unsigned int seed = (unsigned int) time(nullptr);
	while(seed == 0)
		seed = (unsigned int) time(nullptr);
	seed *= seed;
	seed = seed % (ubound - lbound) + lbound;
	return seed;
}


int main()
{
	int n = 0;

	n = RandomGenerator::random(0, 100);

	RandomGenerator rg;
	n = rg.random(0, 100);
	n = rg.random(0, 100);	
	n = rg.random(0, 100);

	return 0;
}

/*
In this program we learned 'random' implemented as 
static member function.

Thus a class can have both static and non-static member
functions. The differences between these two types of
functions are as follows:

Static Member function
1. Calling with object is optional. Most of the times they
are called with class-name::static-member-function-name(...)
syntax.

2. The 'this' pointer is missing.

3. Static member function cannot be constant function.

4. Static member function cannot be virtual function.

Non-static member function
1. Calling with object is mandatory. They cannot be
called with class-name::member-function-name(...) syntax.

2. The 'this' pointer is present and points to an object
on which the function has been called.

3. Non-static member function can be constant function.

4. Non-static member function can be virtual function.

*/