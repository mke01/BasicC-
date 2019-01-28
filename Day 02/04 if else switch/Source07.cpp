void main()
{
	double d = 1.0;

	switch(d)
	{
	case 1.0:
		break;

	case 2.0:
		break;
	}

	bool b = false;

	switch(b)
	{
	case true:
		break;

	case false:
		break;
	}

	int a = 1, b = 2, c = 3;
	switch(true)
	{
	case a > b && a > c:
		break;
	}
}

/*
C++ switch...case allows argument of char, int and bool type only.
*/