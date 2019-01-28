#include<iostream>
using namespace std;

int main()
{
	int n[] = {1,2,3,4,5};

	int *pstart = n;
	int *pend = n + sizeof(n) / sizeof(int);

	while(pstart < pend)
	{
		cout<<*pstart++<<endl;
	}
	
	return 0;
}