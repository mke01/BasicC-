int main()
{
	int a = 1;
	int &ra = a; // ra is a non-costant reference

	a = 5;
	ra = 10;
	
	const int &cra = a; // cra is constant reference
	cra = 15; // Assignment to constant reference is not allowed

	return 0;
}