class X
{
public:
};

int main()
{
	X a;
	return 0;
}

/*
When a class is written with no constructor
then we assume compiler provides
default(non-parametrict) constructor, which
does nothing.

As soon as we write a constructor, we
assume compiler stops providing default
constructor.

Similarly, when a class is written without
destructor, we assume compiler has provided
desturctor, which does nothing.

Thus in context with destructor we can say
that destructor always exist in the class.
*/