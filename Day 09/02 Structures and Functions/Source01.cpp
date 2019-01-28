struct Point
{
	int x;
	int y;
};

Point Offset(Point p, int dx, int dy);

int main()
{
	Point p1 = { 1, 2 };

	Point p2 = { 0, 0 };

	p2 = Offset(p1, 1, 5);

	return 0;
}

Point Offset(Point p, int dx, int dy)
{
	p.x += dx;
	p.y += dy;
	return p;
}

/*
This program illustrates
- scope of the structure (note here we declared struct Point globally, so that it
  becomes available to all functions of this file)
- structure as function argument and return value
- accessing structure members such as 'x' and 'y' of 'p'.

In this program we also observed that 'p1' of 'main' function is passed to
'offset' by value. This creates data redundancy and also consumes full structure
memory space in Offset. There by increasing pressure on stack.
*/