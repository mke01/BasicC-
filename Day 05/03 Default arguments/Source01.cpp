#include <stdint.h>

inline int min(int a, int b = INT32_MAX)
{
	return a < b ? a : b;
}

int main()
{
	int u = 1, v = 2, r = 0;
	r = u < v ? u : v;
	r = min(6); // r = min(6, INT32_MAX);
	r = min(5, 3);
	return 0;
}

/*
1. Default arguments is a feature of C++.
2. With default argument, a parameter turns out to be optional
   In above example, parameter 'b' has turned out to be optional.
   Parameter 'a' is mandatory.
3. Function with default arguments simulates presence of overloaded function.
4. When argument is not supplied for optional parameter compiler assumes default
   argument as a value of that optional parameter.
5. When argument is supplied for optional parameter, compiler assumes same as 
   a value of that optional parameter.
6. Optional parameters must be listed after all mandatory parameters.
7. Also, while supplying argument to far right optional parameter, if there are
   any optional parameters in between, then arguments must be mentioned
   to in between optional parameters as well.
   For ex. if following is a signature of min function
   int min(int a, int b = INT32_MAX, int c = INT32_MAX) and if we want to pass
   specific value to 'c' parameter then we will also have to pass value to
   'b' parameter. Syntax such as min(4, ,6), assuming that 'b' shall take
   INT32_MAX, is not possible in C++. Since we don't have specific value to be
   passed to 'b' we will have to call min as min(4, INT32_MAX, 6).
*/