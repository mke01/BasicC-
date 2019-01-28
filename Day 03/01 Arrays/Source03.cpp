#define N 5
#define ROWS 2
#define COLS 3

void main()
{
	// An array can be defined without initializers.
	// In such case elements contain garbage value.
	int a[5];

	int size = 5;
	int b[size]; // Dimention of an array cannot be specified
				 // in a variable.

	const int len = 5;
	int c[len]; // 'len' being readonly variable is allowed
				// to determine size of an array.

	int d[N]; // We can use macro variable to define
			  // size of an array.

	int e[];  // In C++ its not possible to define array without
			  // dimension. Initilizers list is compusory in this
			  // case.

	int f[] = { 1, 2, 3 };

	int g[][]; // We cannot define double dimension array
			   // without dimensions. Either dimensions has
			   // to be mentioned or initializer list must
			   // be mentioned.

	// If initializers list is given then rows dimension can be
	// omitted.
	int h[][3] = { {1, 2, 3}, {4, 5, 6} };

	int col = 3;
	int i[][col] = { {1, 2, 3}, {4, 5, 6} };

	const int columns = 3;
	int j[][columns] = { {1, 2, 3}, {4, 5, 6} };

	int k[ROWS][COLS] = { {1, 2, 3}, {4, 5, 6} };
}