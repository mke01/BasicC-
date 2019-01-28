void main()
{
	int a = 1, b = 2, c = 0;

	//b = b + a;
	b += a; // compound addition operator

	c *= a + b;
	// Above expression is evaluated as
	// c = c * (a + b);
}