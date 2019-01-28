
// 0 : Black
// 1 : Red
// 2 : Green
// 4 : Blue

enum ColorConstants
{
	Black,
	Red,
	Green,
	Yellow,
	Blue,
	Magenta,
	Cyan,
	White
};

class Rectangle
{
public:
	void Fill(ColorConstants color);
};

void Rectangle::Fill(ColorConstants color)
{
	// if(color < 0 || color > 7)
	// throw "Invalid Colour Code";
	/*
	We could eliminate above condition check because, now the color parameter
	is ColorConstants type. While calling Fill function compiler forces us to use
	any constant out of the listed constants of respective enumeration.

	Thus user cannot pass any integer inplace of color constant.
	Because now condition check is eliminated, the performance of Fill color function
	will improve slightly.
	*/
}

int main()
{
	Rectangle r;

	r.Fill(Red);
	r.Fill(ColorConstants::White);
	r.Fill(ColorConstants::Black);
	
	return 0;
}