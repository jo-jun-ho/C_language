#include "screen.h"
#include <Windows.h>
#include <stdio.h>

void SetCursorPosition(int x, int y)
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void SetCursorVisible(int isVisible)
{
	CONSOLE_CURSOR_INFO cursorInfo;
	cursorInfo.bVisible = isVisible;
	cursorInfo.dwSize = 1;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
}