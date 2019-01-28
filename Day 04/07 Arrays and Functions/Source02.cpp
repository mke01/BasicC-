#include <iostream>
using namespace std;

#define SIZE 5

#define SIZE2 7

void print(int n[], int size);

int main()
{
	int a[SIZE] = { 1, 2, 3, 4, 5 };

	print(a, SIZE);

	int b[SIZE2] = { 1, 2, 3, 4, 5, 6, 7 };

	print(b, SIZE2);

}

void print(int n[], int size)
{
	for(int i = 0; i < size; ++i)
	{
		cout << n[i] << endl;
	}
}

/*
Illustrates how to pass an entire array to a function.
*/