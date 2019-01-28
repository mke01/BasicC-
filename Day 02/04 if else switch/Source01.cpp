#include <iostream>
using namespace std;

void main()
{
	int r = 0;

	cout << "Input radius: ";
	cin >> r;

	if(r < 0)
	{
		cout << "Incorrect radius. Exiting program..." << endl;
		return;
	}

	double area = 0.0;
	area = 3.14 * r * r;
	cout << "Area of circle is " << area << endl;
}