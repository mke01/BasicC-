#include <crtdbg.h>
#include <cstring>
#include <iostream>
using namespace std;

#define NAMESIZE 32

#define RELEASEOBJECT(p) delete p; \
	p = nullptr;

struct Person
{
	char *pname;
	int age;
};

int main()
{
	int len = strlen("Jhon");
	Person *pperson = new Person;
	pperson->pname = new char[len + 1];
	strcpy_s(pperson->pname, len + 1, "Jhon");
	pperson->age = 23;

	cout << pperson->pname << endl;
	cout << pperson->age << endl;

	RELEASEOBJECT(pperson->pname);
	RELEASEOBJECT(pperson);

	_CrtDumpMemoryLeaks();

	return 0;
}