#include <iostream>
using namespace std;

#define SIZE 5

int main()
{
	int n[SIZE] = { 1, 2, 3, 4, 5 };
	int *p[SIZE]; // Array of Pointers

	for(int i = 0; i < SIZE; ++i)
	{
		p[i] = &n[i];
	}

	for (int i = 0; i < SIZE; i++)
	{
		cout << *p[i] << endl;
	}

	return 0;
}