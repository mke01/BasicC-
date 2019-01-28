int main()
{
	int i = 1;
	int &j = i; // Here j is known as reference and i as referent
	i = 5;
	j = 10;
	int &k = 5; // Refer rule 3 in following comments
	return 0;
}

/*
Characteristic rules of Reference
1. Initialization of reference is complusory.
2. A reference once associated with particular referent will
   keep refering to the same referent till the end of its
   lifetime. C++ provides no way to break this association.
   It breaks only when reference cease to exist.
3. A lvalue reference cannot refer to rvalue referent i.e.
   constant or expression.
*/