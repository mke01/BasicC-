#include <crtdbg.h>

int main()
{
	int *p = nullptr;

	int n = 5;

	p = new int[n];

	for (int i = 0; i < n; i++)
	{
		p[i] = i;
	}

	delete[] p;

	p = nullptr;

	_CrtDumpMemoryLeaks();

	return 0;
}