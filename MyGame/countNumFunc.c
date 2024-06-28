#include <stdio.h>
#include "countNumFunc.h"
#include "windows.h"

void gameWin() {
	printf("축하합니다! 게임을 클리어했습니다!\n");
}

void setColor(unsigned char BGColor, unsigned char TextColor)
{
	if (BGColor > 15 || TextColor > 15) return;

	unsigned char colorNum = (BGColor << 4) | TextColor;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);
}