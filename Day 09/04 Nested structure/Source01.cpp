#include <iostream>
using namespace std;

// Outer structure
struct Employee
{
	// Inner structure
	struct Date
	{
		int dd;
		int mm;
		int yy;
	};
	
	char name[32];
	Date joiningDate;
	Date birthDate;
};

int main()
{
	Employee e = { "Vijay", { 31, 1, 2017 }, { 31, 1, 1995 } };

	cout << e.name << endl;
	cout << e.joiningDate.dd << endl;
	cout << e.joiningDate.mm << endl;
	cout << e.joiningDate.yy << endl;

	return 0;
}

/*
This program illustrates nesting of structures.
Here Date structure is nested within Employee structure.
*/