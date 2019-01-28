#include <iostream>
using namespace std;

void main()
{
	char op;
	int a = 0, b = 0;
	double result = 0.0;

	cout << "Input a: ";
	cin >> a;

	cout << "Input b: ";
	cin >> b;

	cout << "Input operator[+ - * /]: ";
	cin >> op;

	switch(op)
	{
	case '+':
		result = a + b;
		break;
	case '-':
		result = a - b;
		break;
	case '*':
	case 'x':
	case 'X':
		result = a * b;
		break;
	case '/':
		result = double(a) / b;
		break;
	default:
		cout << "Invalid operator." << endl;
		return;
	}

	cout << "result = " << result << endl;
}

/*
Behavior of switch...case
1. Only first matching case is executed.
   After execution of that case and if that case is terminated
   with break statement then control exits the switch...case.
2. When none of the case matches, default is executed.
3. default can be placed anywhere within switch...case,
   however it is good practice to put it at the end.
4. default if written at the end need not be terminated
   with break or return. If written at the begining or
   in between then it must be terminated with break or return.
5. When case is not written with break, a fall through happens.
   Sometimes this fall through is desired, as in above code.
   For multiplication case we desire fall through.
   Other cases if fall through is happening, it may be logical
   bug.
*/