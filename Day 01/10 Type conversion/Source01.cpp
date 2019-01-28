void main()
{
	int a = 1;
	int b = 0;
	b = a; // no type conversion involved here
	
	double d = 3.14; // no type conversion involved here

	d = a; // type conversion happening here implicitly,
	// because in doing so there is no loss of data taking place.

	float f = .1f;
	f = float(d); // since f = d is likely to have loss of data
	// compiler is not ready to do it implicitly.
	// compiler throws warning for this type conversion.
	// We therefore need to take resposibility for whatever
	// loss of data likely to take place.
	// We convey this to compiler by writing f = float(d).
	// By writing float(d), we are conveying to the compiler
	// for not to bother loss of data and just convert it to
	// float format.
	// float(d) is now known as explicit type conversion or
	// explicit type casting.
}