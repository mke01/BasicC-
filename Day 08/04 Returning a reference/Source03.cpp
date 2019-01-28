int i = 1;

int& f()
{
	return i;
}

const int& g()
{
	return i;
}


int main()
{
	int &a = f();
	const int &b = f();

	int &c = g();
	const int &d = g();

	return 0;
}

/*
In above program we observe, reference returned by f can
be assigned to const or non-const references.

However, reference returned by g can only be assigned to
const reference.

In otherwords, we observe f is more versatile than g,
in terms of the reutrning of reference.

Following is a signature of a function which is most
versatile on parameter and on return type side.

type& f(const type& t);
*/ 