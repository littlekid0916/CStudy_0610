#include <stdio.h>
#include "Console.h"
#include <stdbool.h>
#include "time.h"
#include <stdlib.h>

#define MAX 30	// ��ó����� MAX ���ڿ� ���� 10���� ���� ġȯ

int main() {

	// ���� ũ��
	SetConsoleSize(30, 30);
	// Ŀ�� ���ֱ�
	SetConsoleCursorVisibility(0);

	int x= 14, y = 28;	// �÷��̾��� ��ǥ
	int bx = 0, by = 0;	// �Ѿ��� ��ǥ
	bool bullet = false;	// ���� �Ѿ��� �������� �ʾ����� false, ���� ������ true

#if false	// ���� �� ���� �������� �ڵ�(��Ȱ��ȭ)

	int ex = 0, ey = 0;	// ���� ��ǥ
	bool enemy = false;	// ���� ������ �� false, ������ �� true
	int ex2 = 0, ey2 = 0;
	bool enemy2 = false;

#endif

	int ex[MAX] = { 0 };
	int ey[MAX] = { 0 };
	bool enemy[MAX] = { false };
	srand(time(NULL));

#if true	// �÷��̾��� �̵� ����

	while (true) {

		Clear();

#if false

		if (!enemy) {
			srand(time(NULL));
			ex = (rand() % 15) * 2;
			ey = 0;
			enemy = true;
		}

		if (!enemy2) {
			srand(time(NULL) * 2);
			ex2 = (rand() % 15) * 2;
			ey2 = 0;
			enemy2 = true;
		}

#endif

		for (int i = 0; i < MAX; i++) {
			if (!enemy[i]) {
				ex[i] = (rand() % 15) * 2;
				ey[i] = 0;
				enemy[i] = true;
				break;
			}
		}

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

#if false

		if (enemy) {
			GotoXY(ex, ey);
			printf("��");
			ey++;

			if (ey > 28) enemy = false;
		}

		if (enemy2) {
			GotoXY(ex2, ey2);
			printf("��");
			ey2++;

			if (ey > 28) enemy2 = false;
		}

#endif

		for (int i = 0; i < MAX; i++) {
			if (enemy[i]) {
				GotoXY(ex[i], ey[i]);
				printf("��");
				ey[i]++;

				if (ey[i] > 28) enemy[i] = false;
			}
		}

		Sleep(50);	// �Է°� ��ŭ ��ٷȴٰ� �ٽ� ����
	}

}