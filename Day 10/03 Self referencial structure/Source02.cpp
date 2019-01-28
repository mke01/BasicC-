#include <crtdbg.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

#define RELEASEOBJECT(p) delete p; \
	p = nullptr;

struct Person
{
	int salcode;
	int age;
	Person *pnextPerson;
};

Person *phead = nullptr;

void AcceptData(int *salcode, int *age);
void AppendPerson(int salcode, int age);
void PrintPersons();
void ClearAll();

int main()
{
	int choice = 0;
	int salcode = 0, age = 0;

	do
	{
		system("cls");
		cout << "1. Append Person's Data" << endl;
		cout << "2. Print Persons Data" << endl;
		cout << "3. Clear All" << endl;
		cout << "4. Exit" << endl;
		cin >> choice;

		switch (choice)
		{
		case 1:
			AcceptData(&salcode, &age);
			AppendPerson(salcode, age);
			break;
		case 2:
			PrintPersons();
			system("pause");
			break;
		case 3:
			ClearAll();
			break;
		case 4:
			goto EXIT;
		default:
			cout << "Invalid choice." << endl;
			system("pause");
			break;
		}
	} while(choice != 4);
EXIT:
	_CrtDumpMemoryLeaks();
	return 0;
}

void AcceptData(int *psalcode, int *page)
{
	cout << "Enter Salcode: ";
	cin >> *psalcode;

	cout << "Enter Age: ";
	cin >> *page;
}

void AppendPerson(int salcode, int age)
{
	Person *pnewPerson = new Person;
	pnewPerson->salcode = salcode;
	pnewPerson->age = age;
	pnewPerson->pnextPerson = nullptr;

	if(phead == nullptr)
	{
		phead = pnewPerson;
		return;
	}

	Person *pwalker = phead;
	while(pwalker->pnextPerson != nullptr)
		pwalker = pwalker->pnextPerson;
	pwalker->pnextPerson = pnewPerson;
}

void PrintPersons()
{
	Person *pwalker = phead;
	if(pwalker == nullptr)
	{
		cout << "No persons data found. List is empty." << endl;
		return;
	}

	while(pwalker != nullptr)
	{
		cout << "Salcode: " << pwalker->salcode << ", Age: " << pwalker->age << endl;
		pwalker = pwalker->pnextPerson;
	}
}

void ClearAll()
{
	Person *pwalker = phead;
	while(pwalker != nullptr)
	{
		phead = pwalker->pnextPerson;
		RELEASEOBJECT(pwalker);
		pwalker = phead;
	}
}