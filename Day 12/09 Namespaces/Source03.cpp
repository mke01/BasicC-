namespace X
{
	int n;

	void f()
	{
	}
};

using namespace X;
using namespace std;

int main()
{
	n = 1;
	f();
	return 0;
}

/*
When a symbol is a part of a namespace then to access
such symbol we need to refer to its namespace first.

This at times may turn out to be labourious. We can
reduce this labour of mentioning namespace name
everytime, by wrting 'using namespace namespace-name'
statement at the begining. For ex. using namespace X;
With this, we can omit reference of namespace-name
while accessing symbols.

Note we can write using namespace statement multiple times
and the next using statement doesn't replace the previous
using statement effects.
*/