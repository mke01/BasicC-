#include<iostream>
using namespace std;

class PowerSupply
{
public:
	PowerSupply(int i)
	{
		cout << "Constructing the Power Supply" << endl;
	}
	~PowerSupply()
	{
		cout << "Breaking the Power Supply" << endl;
	}
};

class Drive
{
public:
	Drive()
	{
		cout << "Constructing the Drive" << endl;
	}
	~Drive()
	{
		cout << "Breaking the Drive" << endl;
	}

public:
	void ReadFile()
	{
		cout << "Reading the File" << endl;
	}
	
private:
	void readSector()
	{
		cout << "Reading Sector." << endl;
	}
};

class CPU
{
public:
	CPU() : smps(230)
	{
		cout << "Constructing the CPU" << endl;
	}
	~CPU()
	{
		cout << "Breaking the CPU" << endl;
	}

public:
	void Boot()
	{
		cdrive.ReadFile();
		//cdrive.ReadSector();
	}

private:
	PowerSupply smps;
	Drive cdrive;
};

int main()
{
	{
		CPU mycpu;
		mycpu.Boot();
	}
}
/*
When an object is made up of sub objects, we classify the relationship between the either 
as composition or aggregation.

In composition relationship, one object is placed inside another object as part of that 
object. The object which contains the part object is known as whole. Thus composition 
relationship is also known as Whole-Part Relationship. It is also known as "Has A" 
relationship.
The space taken by whole is often sum total of the space taken by individual parts.

In C++ we represent composition by defining object(smps, cdrive) of one class as members 
of object (mycpu) of another class.

If two objects are related by composition i.e. whole and part then to make whole object 
we will have to make part object first.

This is what happens in C++, when we attempt to create whole object (mycpu), it is part 
object (smps, cdrive) which is constructed first i.e. constructor for smps and cdrive are 
called first and then for mycpu. If the part class contains parametric constructor then 
we use initialization list (spms(230)) as shown above in the program.

The destructor calls are exactly opposite of constructor calls. Hence the destructor for 
whole class is executed first and then for parts.

Though whole object is made up of part objects. It has access only to public interface of 
part objects i.e. whole object cannot access private or protected members of part objects.
*/