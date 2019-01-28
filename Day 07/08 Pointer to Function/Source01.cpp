void f()
{
}

void g()
{
}

int h()
{
	return 1;
}

void k();

int main()
{
	void (*pfunc)() = nullptr;

	pfunc = &f;

	f(); // calling function by name

	(*pfunc)(); // calling same f using function pointer

	pfunc = &g;

	(*pfunc)(); // here g function is called indirectly

	pfunc = &h; // it turns out as an error 
				// since pfunc signature is incompatible with h
				
	return 0;
}