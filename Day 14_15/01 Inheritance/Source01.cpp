void f();
void f();
void f();

#if !defined(CLASSX)
#define CLASSX

class X
{};

#endif

#if !defined(CLASSX)
#define CLASSX

class X
{};

#endif


int main()
{
	f();
	return 0;
}

void f()
{
}