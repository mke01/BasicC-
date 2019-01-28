inline int min(int a, int b)
{
	return a < b ? a : b;
}

int main()
{
	int u = 1, v = 2, r = 0;
	r = u < v ? u : v;
	r = min(6, 3);
	r = min(5, 6);
	return 0;
}

/*
1. Inline is a feature of C++.
2. When a function is marked to be inlie, compiler replaces call of that function
   with its definition.
3. Note inline is a request to a compiler and not an order.
4. There are occasion when compiler refuses to inline your function.
   Those occasions are
   - if the function is lengthy
   - if the function is recursive
   - if the function is virtual etc.
*/