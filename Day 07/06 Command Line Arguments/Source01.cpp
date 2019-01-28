#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int sum = 0, n = 0;

	for (int i = 1; i < argc; ++i)
	{
		n = atoi(argv[i]);
		sum = sum + n;
	}

	cout << sum << endl;

	return 0;
}