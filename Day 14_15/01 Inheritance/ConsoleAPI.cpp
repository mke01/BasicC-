#include <Windows.h>

#include "ConsoleAPI.h"

void ConsoleAPI::GotoXY(int x, int y)
{
	COORD xy = { x, y };
	HANDLE hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hConsoleOutput, xy);
}