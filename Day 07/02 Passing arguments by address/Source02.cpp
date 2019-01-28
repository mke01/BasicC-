void swap(int *u, int *v);

int main()
{
	int a = 1;
	int b = 2;
	
	swap(&a, &b);

	return 0;
}

void swap(int *u, int *v)
{
	int t;
	t = *u;
	*u = *v;
	*v = t;
}

/*
This program illustrates passing arguments by their address.
In above program We passed address of local variables 'a' and 'b'
to swap function. 'u' and 'v' are pointers (address variables).
They hold address of 'a' and 'b' respectively.

The swap algorithm dereferences (access value pointed by) pointer,
and make changes to 'a', 'b'.

Note all variables 'a', 'b', 'u' and 'v' have distict memory
space, however unlike previous program, here 'u' and 'v'
holds address of 'a' and 'b' and not copy of values stored in
'a' and 'b'.

Because 'u' and 'v' are sourcing values to swap algorithm
from outer world (here main) and providing values back to
outer world (again here main), we will call them as
'in-out' parameters.
*/