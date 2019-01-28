int main()
{
	int i = 1;
	int *p = &i;
	delete p;
	return 0;
}

/*
Don't use delete operator with pointer that is pointing to
some location on stack or global data space or constant
memory.
*/
