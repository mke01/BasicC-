int& f()
{
	int i = 1;
	return i;
}

int main()
{
	int &k = f();
	k = 5;
	return 0;
}

/*
We should never return reference of a non-static local variable.
Because such variable is released as soon as control exits function
in which it is defined. Thus returing reference of released variable is
not good. We call such reference as dangling reference.

Remember for reference to be good reference, the lifetime of referent must be
greater than or equal to lifetime of reference.

If this rule is not followed then the resultant refernce is a
dangling or bad reference.
*/