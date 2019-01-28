#include <stdio.h>

#define N 5

void main()
{
	int i = 0;
	int a[N];

	do
	{
		a[i] = i + 1;
		++i;
	}while(i < N);
}