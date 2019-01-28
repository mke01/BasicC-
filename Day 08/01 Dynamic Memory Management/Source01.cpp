#include <malloc.h>
#include<crtdbg.h>
int main()
{ 
	int *p = nullptr;

	int p =10;
	/*int *p = nullptr;

	p = (int*) malloc(sizeof(int));

	*p = 5;

	free(p);

	p = nullptr;

	return 0;*/
	_CrtDumpMemoryLeaks();

	return 0;
}