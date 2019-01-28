int main()
{
	register int n = 1;
}

/*
When a variable is defined with keyword register then it is said to be belonging to
register storage class. A microprocessor is built with few set of internal
memory locations. These memory locations are known as registers.
When a variable is defined with register keyword then compiler attempts to
locate this variable in register, if available.
Note placement of variable in register is a request to a compiler and not
an order. If compiler fails to reserve variable in register,
then it will be placed in stack frame.
*/