namespace X
{
	int n;

	void f()
	{
	}
};

int main()
{
	X::n = 1;
	X::f();
	return 0;
}

/*
A namespace is not a class. Thus a namespace is not a type.
You cannot instantiate a namespace. A namespace merely
represents logical way of grouping symbols.

In case if we want to group symbols physically, we need to
make use of libraries, either static or dynamic.

Once a symbol is a member of namespace, then to access
such symbol, we will have to refere to namespace first.

A namespace may nest another namespace.
*/