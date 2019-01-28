int main()
{
	struct Point
	{
		int x;
		int y;
	};

	Point p = { 1, 5 }; // This is how we initialize structure variable

	Point q = { 4, 6 };

	Point r = p; // Initializing structure variable using another structure variable
				 // of same type.
	Point s;

	s = q;	// structure variable assignment

	return 0;
}