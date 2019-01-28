class X
{
public:
	int n;
};

int main()
{
	X u;
	u.n = 1;
	return 0;
}

/*
C++ supports another feature known as 'class'.
It's identical to structure, but with a difference
of default access.

Inside class default access is private and inside
structure default access is public. We however can
override this default access behaviour by appropriately
using private and public access specifiers.
*/