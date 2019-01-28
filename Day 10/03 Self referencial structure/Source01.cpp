#include <iostream>
using namespace std;

struct Person
{
	int salcode;
	int age;
	Person *pnextPerson;
};

int main()
{
	Person persons[3];

	persons[0].salcode = 1;
	persons[0].age = 23;
	persons[0].pnextPerson = &persons[2];

	persons[1].salcode = 2;
	persons[1].age = 25;
	persons[1].pnextPerson = nullptr;

	persons[2].salcode = 3;
	persons[2].age = 22;
	persons[2].pnextPerson = &persons[1];

	Person *pwalker = &persons[0];

	while(pwalker != nullptr)
	{
		cout << pwalker->salcode << ", " << pwalker->age << endl;
		pwalker = pwalker->pnextPerson;
	}

	return  0;
}