#include <time.h>
#include <stdlib.h>

#define ROWS 4
#define COLS 3

void main()
{
	int i = 0, r = 0, c = 0;
	int n[ROWS][COLS] = { 0 };

	srand((unsigned) time(nullptr));

	for(i = 1; i <= ROWS * COLS; ++i)
	{
		while(1)
		{
			r = rand() % ROWS;
			c = rand() % COLS;
			if(n[r][c] != 0)
				continue;
			n[r][c] = i;
			break;
		}
	}
}