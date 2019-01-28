#include <stdio.h>

// Macro Function
#define MAX(a, b) (a > b ? a : b)

void main()
{
	int u = 1, v = 2, w = 0;
	w = MAX(u, v);

	printf("Max value is %d\n", w);
}

/*
Macros are mostly written in capital letters.
Note if a macro is written in mixed or small case
letters, its not a syntactial error.
Its a convention to write macros in 
capital letters.
*/