extern "C" _declspec(dllexport) int min(int a, int b);

int min(int a, int b)
{
	return a < b ? a : b;
}