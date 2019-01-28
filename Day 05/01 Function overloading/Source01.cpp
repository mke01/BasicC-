int min(int a, int b)
{
	return a < b ? a : b;
}

int min(int a, int b, int c)
{
	return ( a < b && a < c ? a : ( b < c  ? b : c ));
}

int main()
{
	int u = 1, v = 2, w = 3, r = 0;
	r = min(u, v);
	r = min(u, v, w);
	return 0;
}

/*
1. When more than one function bear same name but differ
   in signature then those functions are said to perform function overloading.

2. It's a feature of C++ i.e. C doesn't support function overloading.

3. For function overloading to take place following conditions must be met.
   - Functions must have same name.
   - Their parameter list should differ in
     number of parameters and/or type of parameters and/or order of parameters
	 occurance.

4. Function overloading doesn't happen
   - If parameter list differs only in their names.
   - If functions' signature differs only their return types.
*/