int main()
{
	int i = 1;
	int &j = i; // j is reference to scalar variable
	int &k = i; // k is reference to scalar variable
	int &m = j; // m is reference to reference

	i = 5;
	j = 7;
	k = 9;
	m = 11;

	return 0;
}

/*
When above program is executed, eventually j, k and m 
turns out to be references of i.

Note m is a reference to reference. It however eventually
refers to the same variable which j is referring to.
				m
		+------------+
		|			 |
	  i	|	   5	 | k
		|			 |
		+------------+
				j

*/