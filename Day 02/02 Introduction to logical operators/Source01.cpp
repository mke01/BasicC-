void main()
{
	bool b;

	b = false && false;
	b = false && true;
	b = true && false;
	b = true && true;

	b = false || false;
	b = false || true;
	b = true || false;
	b = true || true;

	b = !true;
	b = !false;
}

/*
C++ AND and OR opreators are smart operators.

If first operand to AND operator is false
then AND operator overlooks second operand.
The end result is false.

Similarly, if first operand to OR operator is true
then OR operator overlooks second operand.
The end result is true.
*/