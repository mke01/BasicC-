int main()
{
	int *p = new int; // valid pointer
	int *q = nullptr; // null pointer
	int *r = p;		  // bad or dangling pointer 

	delete p;		  // releases memory allocated on heap
	delete q;		  // no memory is released and no error generated
	delete r;		  // debug assertion

	return 0;
}