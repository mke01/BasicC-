#include <stdio.h>

int min(int a, int b);

int main()
{
	int u = 1, v = 2, w = 3, r = 0;
	r = min(u, v);
	printf("Min number is %d\n", r);
	return 0;
}

/*
Command to compile in command shell is 'cl /c a.cpp'.
This prodces a.obj.
Command to link in command  shell is 'link a.obj b.lib /OUT:myexe.exe'.
This produces myexe.exe.
*/