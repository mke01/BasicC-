#include <iostream>
using namespace std;

#define SIZE 5

void print(int n);

int main()
{
	int a[SIZE] = { 1, 2, 3, 4, 5 };

	for(int i = 0; i < SIZE; ++i)
	{
		print(a[i]);
	}
}

void print(int n)
{
	cout << n << endl;
}

/*
Illustrates how to pass an array element to a function.
*/