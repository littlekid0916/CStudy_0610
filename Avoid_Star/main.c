#include <stdio.h>
#include "Console.h"
#include <stdbool.h>

int main() {

	// ���� ũ��
	SetConsoleSize(30, 30);
	// Ŀ�� ���ֱ�
	SetConsoleCursorVisibility(0);

	int x= 14, y = 28;	// �÷��̾��� ��ǥ
	int bx = 0, by = 0;	// �Ѿ��� ��ǥ
	bool bullet = false;	// ���� �Ѿ��� �������� �ʾ����� false, ���� ������ true

	while (true) {

		Clear();

#if true	// �÷��̾��� �̵� ����

		if (GetAsyncKeyState(VK_LEFT) & 8001) {
			if (x < 1) x = 1;
			x--;
		} else if (GetAsyncKeyState(VK_RIGHT) & 8001) {
			if (x > 27) x = 27;
			x++;
		} else if (GetAsyncKeyState(VK_UP) & 8001) {
			if (y < 1) y = 1;
			y--;
		} else if (GetAsyncKeyState(VK_DOWN) & 8001) {
			if (y > 28) y = 28;
			y++;
		}

#endif

		GotoXY(x, y);
		printf("��");

#if true

		if (GetAsyncKeyState(VK_SPACE) & 8001) {
			if (!bullet) {
				bx = x;
				by = y - 1;
				bullet = true;
			}
		}

		if (bullet) {
			by--;
			GotoXY(bx, by);
			printf("��");

			if (by < 1) bullet = false;
		}

#endif

		Sleep(50);	// �Է°� ��ŭ ��ٷȴٰ� �ٽ� ����
	}

}