#include <cstring>
#define NAMESIZE 32

#define RELEASEOBJECT(p) delete p; \
	p = nullptr;

struct Person
{
	char name[NAMESIZE];
	int age;
};

int main()
{
	Person *pperson = new Person;

	strcpy_s(pperson->name, NAMESIZE, "Jhon");
	pperson->age = 23;

	//delete pperson;
	//pperson = nullptr;

	RELEASEOBJECT(pperson);

	return 0;
}