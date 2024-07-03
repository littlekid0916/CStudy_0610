#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
//#include "Console.h"

void Clear(void)
{
	system("cls");
}

void GotoXY(int _x, int _y)
{
	COORD pos = { _x, _y };

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void SetTitle(char* _szConsoleName)
{
	SetConsoleTitle(_szConsoleName);
}

void SetColor(unsigned char _BgColor, unsigned char _TextColor)
{
	if (_BgColor > 15 || _TextColor > 15) return;

	unsigned short ColorNum = (_BgColor << 4) | _TextColor;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), ColorNum);
}

void SetConsoleCursorVisibility(int _bShow)
{
	CONSOLE_CURSOR_INFO curInfo;
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	if (GetConsoleCursorInfo(hConsole, &curInfo))
	{
		curInfo.bVisible = _bShow;
		SetConsoleCursorInfo(hConsole, &curInfo);
	}
}

void SetConsoleSize(int _col, int _lines)
{
	char setText[100];
	sprintf_s(setText, 100, "mode con cols=%d lines=%d", _col, _lines);
	system(setText);
}