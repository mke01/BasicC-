#include <crtdbg.h>

int main()
{
	int *p = nullptr;

	p = new int(1);

	*p = 5;

	delete p;

	p = nullptr;

	_CrtDumpMemoryLeaks();

	return 0;
}