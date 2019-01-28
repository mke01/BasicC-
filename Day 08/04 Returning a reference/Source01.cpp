int i = 1;

int& f()
{
	//int &j = i;
	//return j;
	return i;
}

int main()
{
	int &k = f();
	k = 5;
	return 0;
}