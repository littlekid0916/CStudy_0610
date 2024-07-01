#include <stdio.h>
#include "countNumFunc.h"
#include "windows.h"

// 함수 이름 변경 방법 : ctrl + R + R

int inputNumber() {
	int returnValue;
	scanf_s("%d", &returnValue);
}

void startGameSetting() {
	printf("◈ 안녕하세요 환영합니다 ◈\n");
	printf("숫자를 입력하면 게임이 시작됩니다.\n");
}

int setPlayerHP() {
	printf("플레이어의 체력을 설정해주세요\n");
	int inputNumber();
}

void gameWin() {
	printf("축하합니다! 게임을 클리어했습니다!\n");
}

void setColor(unsigned char BGColor, unsigned char TextColor)
{
	if (BGColor > 15 || TextColor > 15) return;

	unsigned char colorNum = (BGColor << 4) | TextColor;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);
}

int fail(int playerHP) {
	int currentPlayHp = playerHP - 1;
	return currentPlayHp;
}