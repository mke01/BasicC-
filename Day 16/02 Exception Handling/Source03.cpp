#include<iostream>
using namespace std;

void foo(int length)
{
//	char c[length];
}


int main()
{
	int arr[] = {5,4,2,2};
	int* ptr = &arr[0];
	int sum=0;
	int len = sizeof(arr)/sizeof(int);

	while(ptr < &arr[len])
		sum += *ptr++;

	cout<<"Sum = "<<sum<<endl;
	
	return 0;
}