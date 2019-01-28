#include <time.h>

class RandomGenerator
{
public:
	static void SetSeed();
	static int random(int lbound, int ubound);
private:
	static unsigned int seed;
};

unsigned int RandomGenerator::seed = 0;

void RandomGenerator::SetSeed()
{
	seed = (unsigned int) time(nullptr);
}

int RandomGenerator::random(int lbound, int ubound)
{
	while(seed == 0)
		SetSeed();
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
In this program we declared 'seed' as static data member
of a class. Thus a class can have both static and
non-static data members. The difference between them
are as follows:

Static data members:
1. They are located in global (static) data space.
   Hence they are shared amongst objects of same class.

2. sizeof operator while calculating size of object space
   never counts bytes consumed by these members.

3. Besides declaration within class, they also need to be
   defined outside the class.

4. If we fail to define them outside the class,
   it leads to linking error.

5. Both static and non-static member functions can access
   them.

6. Static members are commonly known as class members
   i.e. class-method and class-data-member

Non-static data members:
1. They are located in object space. They are object
   specific i.e. they are not shared between objects of
   same class.

2. sizeof operator while calculating size of object space
   counts bytes consumed by these members.

3. They need to be just declared within the class.

4. If we attempt to define them outside the class,
   it leads to compilation error.

5. Only non-static member functions can access them.

6. Non-static members are commonly known as instance
   members i.e. instance-method and instance-data-member
*/