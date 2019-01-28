void swap(int u, int v);

int main()
{
	int a = 1;
	int b = 2;
	
	swap(a, b);

	return 0;
}

void swap(int u, int v)
{
	int t;
	t = u;
	u = v;
	v = t;
}

/*
Why upon calling swap function in main function, it is not
swapping values of local variables 'a' and 'b'?

It's because, 'a' and 'b' are passed by value to swap function.

A copy of values of 'a' and 'b' is stored in parameters
'u' and 'v'. The swapping algorithm inside swap function
do swap values, but swaps values between u and v. Changes made
to 'u' and 'v' are not stored back into 'a' and 'b'. This is
because both 'u' and 'v' have distinct memory space 
then 'a' and 'b'. So because they are distinct
changes made to 'u', 'v' are not reflected back in 'a' and 'b'.

Note 'u', 'v' are also known as 'in' parameters.
*/