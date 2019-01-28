#include <cstring>
#include <iostream>
using namespace std;

#define NAMESIZE 32

struct Person
{
	char name[NAMESIZE];
	int age;
};

int main()
{
	Person persons[3] = { {"Jhon", 25} };

	strcpy_s(persons[1].name, "Jack");
	persons[1].age = 23;

	cout << "Enter person's name: ";
	cin >> persons[2].name;

	cout << "Enter person's age: ";
	cin >> persons[2].age;

	for (int i = 0; i < 3; ++i)
	{
		cout << "Person's name: " << persons[i].name << endl;
		cout << "Person's age: " << persons[i].age << endl << endl;
	}


	return 0;
}

/*
In above program we observe an array can be a member of 
a structure.
*/