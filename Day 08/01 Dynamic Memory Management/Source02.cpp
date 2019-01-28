#include <crtdbg.h>
#include <malloc.h>

int i = 1;

void f()
{
	char *s = "Hello, World";

	int *p = nullptr;

	p = (int*) malloc(sizeof(int));

	*p = 5;

	free(p);

	p = nullptr;
}

int main()
{
	f();

	_CrtDumpMemoryLeaks();

	return 0;
}

/*
In this program we observed that when it was written with
allocations done on stack, constant memory and global data space
it didn't leak memory. This is because, when the program was
compiled, compiler were knowing about these allocations. Hence
complier spitted out a code in executable which takes care of
releasing these memory areas. This is not so with allocations 
done on heap. Allocations on heap are done at run time. At run
time, compiler is not running along with an application. Hence
compiler cannot be hold responsible for freeing allocated
memory areas on heap. It is our responsibility to call
free function. If we fail to call free function, it leads to
memory leakage.

Memory leakage is not good. It makes that portion of memory
resource reserved and not in use. Too many such blocks makes
memory a scarce resource. It may lead your program to such
scenario where now it cannot reserve space for even a small data.
This eventually may lead into crash of your program. Hence memory
leakages must be avoided.

Note when application terminates, all memory leakages are
recovered (i.e. released). However that doesn't mean, you
wait till your application to terminate to relase all memory
leakages. You ensure that they don't happen in your code at
first place.
*/