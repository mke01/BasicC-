#include <stdio.h>

extern "C" _declspec(dllimport) int min(int a, int b);

int main()
{
	int u = 1, v = 2, w = 3, r = 0;
	r = min(u, v);
	printf("Min number is %d\n", r);
	return 0;
}