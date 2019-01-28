double f()
{
	return 1.0;
}

int f()
{
	return 1;
}

int main()
{
	int a = f();
	return 0;
}

/*
This program illustrates that function overloading cannot happen
just based on return type difference.
*/