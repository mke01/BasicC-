extern "C" int min(int a, int b);

int min(int a, int b)
{
	return a < b ? a : b;
}

int min(int a, int b, int c)
{
	return ( a < b && a < c ? a : ( b < c  ? b : c ));
}

/*
1. extern "C" stops C++ style name mangling.
   It name mangles symbols using C style name mangling.
2. Name mangling is a process done by compiler in which
   it changes name of the symbol.
3. Name mangling is also known as name decoration.
4. Name mangling is present in C++ to support
   feature like function overloading.
5. It's done by an algorithm which is present in compiler.
6. The strategy may vary from vendor to vendor.
   Thus Borland may have name mangling strategy which is
   different from Microsoft.
7. The strategy for mangling function name
   typically considers name of the function, number - types - order
   of parameters, whether if function is a constant function, namespace,
   access of the function etc. Based on these inputs, a new name is discovered.
   And that name then becomes new name of that function.
8. Note return type is ignored by name mangling algorithm. Hence we
   cannot hold function overloading based upon only return type difference.
*/