struct X
{
	char a;
	int b;
	char c;
};

int main()
{
	X u;
	return 0;
}

/*
Never compute size of structure manually, you must use
sizeof operator to compute the size.

For ex. if we attempt to compute size of X manually, we may 
come to conclusion that structure X is taking 6 bytes,
but when we compute size with the help of sizeof operator
it computes same to 12 bytes. This is because some padding
bytes are added to members for alignment purpose.

This shows that we should never compute size of structure
manually.
*/