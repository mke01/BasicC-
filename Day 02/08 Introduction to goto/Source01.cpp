#include <time.h>
#include <stdlib.h>
#include <stdio.h>

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

	int value;
	printf("Enter value: ");
	scanf_s("%d", &value);

	for(r = 0; r < ROWS; ++r)
	{
		for(c = 0; c < COLS; ++c)
		{
			if(n[r][c] == value)
			{
				printf("Found %d at row %d and column %d\n",
					value, r, c);
				goto END;
			}
		}
	}
END:;
}