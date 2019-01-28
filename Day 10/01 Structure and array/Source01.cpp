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
	Person person = {"Jhon", 25};
	
	cout << "Person Name: " << person.name << endl;
	cout << "Person Age: " << person.age << endl;

	return 0;
}

/*
In above program we observe an array can be a member of 
a structure.
*/