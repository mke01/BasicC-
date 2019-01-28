struct Point
{
	int x;
	int y;
};

Point Offset(Point *ppoint, int dx, int dy);

int main()
{
	Point p1 = { 1, 2 };

	Point p2 = { 0, 0 };

	p2 = Offset(&p1, 1, 5);

	return 0;
}

Point Offset(Point *ppoint, int dx, int dy)
{
	Point t = { 0, 0 };
	t.x = ppoint->x + dx;
	t.y = ppoint->y + dy;
	return t;
}

/*
This program illustrates how to pass structure variable
by address.
*/