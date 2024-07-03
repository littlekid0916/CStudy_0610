#include <stdio.h>
#include "Console.h"
#include <stdbool.h>
#include "time.h"
#include <stdlib.h>
#include <conio.h>

#define MAX 30	// ��ó����� MAX ���ڿ� ���� 10���� ���� ġȯ
#define BG 15

void GameStart(void) {
	while (true) {
		Clear();
		GotoXY(8, 9);
		printf("�� ���ϱ� ����");
		GotoXY(8, 20);
		printf("Ű�� �Է��Ͽ� ����");
		if (_kbhit()) break;
	}
}

void GameOver(void) {
	Clear();
	int temp;
	printf("GAME OVER\n");
	printf("���� ���Ḧ ���ϸ� �ƹ�Ű�� ������ ���͸� ��������\n");
	scanf_s("%d", &temp);
}

int main() {

	SetTitle("�� ���ϱ� ����");
	// ���� ũ��
	SetConsoleSize(30, 30);
	// Ŀ�� ���ֱ�
	SetConsoleCursorVisibility(0);
	SetColor(BG, 0);

	int score = 0;	// ����

	bool isPlayerDead = false;
	int x= 14, y = 28;	// �÷��̾��� ��ǥ
	int bx = 0, by = 0;	// �Ѿ��� ��ǥ
	bool bullet = false;	// ���� �Ѿ��� �������� �ʾ����� false, ���� ������ true

#if false	// ���� �� ���� �������� �ڵ�(��Ȱ��ȭ)

	int ex = 0, ey = 0;	// ���� ��ǥ
	bool enemy = false;	// ���� ������ �� false, ������ �� true
	int ex2 = 0, ey2 = 0;
	bool enemy2 = false;

#endif

	// ��
	int ex[MAX] = { 0 };
	int ey[MAX] = { 0 };
	bool enemy[MAX] = { false };
	srand(time(NULL));

	GameStart();

#if true	// �÷��̾��� �̵� ����

	while (true) {

		Clear();
		GotoXY(0, 0);
		printf("���� : %d", score);
		score++;

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
				ey[i] = 1;
				enemy[i] = true;
				break;
			}
		}

		if (GetAsyncKeyState(VK_LEFT) & 8001) {
			if (x < 1) x = 1;
			x-=2;
		} else if (GetAsyncKeyState(VK_RIGHT) & 8001) {
			if (x > 27) x = 27;
			x+=2;
		} else if (GetAsyncKeyState(VK_UP) & 8001) {
			if (y < 1) y = 1;
			y--;
		} else if (GetAsyncKeyState(VK_DOWN) & 8001) {
			if (y > 28) y = 28;
			y++;
		}

#endif

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
				SetColor(BG, rand() % 15);
				GotoXY(ex[i], ey[i]);
				printf("��");
				ey[i]++;

				if (ex[i] == bx && ey[i] == by && bullet) {
					bullet = false;
					enemy[i] = false;
				}

				if (ex[i] == x && ey[i] == y) {
					if (!isPlayerDead) isPlayerDead = true;
				}

				if (ey[i] > 28) enemy[i] = false;
			}
		}

		// �÷��̾ ��� ���� ���� ��ġ
		if (!isPlayerDead) {
			SetColor(BG, 12);
			GotoXY(x, y);
			printf("��");
		}
		else {
			GotoXY(x, y);
			printf("��");
			break;
		}

		Sleep(100);	// �Է°� ��ŭ ��ٷȴٰ� �ٽ� ����
	}

	GameOver();

}