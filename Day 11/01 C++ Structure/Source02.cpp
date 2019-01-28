struct Integer
{
	void f()
	{
	}
};

int main()
{
	Integer u;
	u.f(); // This is how we call member function
	return 0;
}

/*
In C language, function cannot be a member of a structure.
In C++ language, however, it can be.

We call function 'f' in above structure as 'Member Function'.

When we computed the sizeof above structure using sizeof
operator, it evaluated to 1 byte. This indicates that
member function(s) do not contribute to the size of object.
*/