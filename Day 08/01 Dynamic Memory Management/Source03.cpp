#include <crtdbg.h>
#include <malloc.h>

int main()
{
	int *p = nullptr;

	int n = 5;

	p = (int*) malloc(sizeof(int)*n); // allocate array of ints

	for(int i = 0; i < n; ++i)
	{
		p[i] = i;
	}
	
	free(p);

	p = nullptr;

	_CrtDumpMemoryLeaks();

	return 0;
}