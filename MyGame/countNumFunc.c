#include <stdio.h>
#include "countNumFunc.h"
#include "windows.h"

// �Լ� �̸� ���� ��� : ctrl + R + R

int inputNumber() {
	int returnValue;
	scanf_s("%d", &returnValue);
}

void startGameSetting() {
	printf("�� �ȳ��ϼ��� ȯ���մϴ� ��\n");
	printf("���ڸ� �Է��ϸ� ������ ���۵˴ϴ�.\n");
}

int setPlayerHP() {
	printf("�÷��̾��� ü���� �������ּ���\n");
	int inputNumber();
}

void gameWin() {
	printf("�����մϴ�! ������ Ŭ�����߽��ϴ�!\n");
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