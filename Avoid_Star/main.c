#include <stdio.h>
#include "Console.h"
#include <stdbool.h>
#include "time.h"
#include <stdlib.h>

#define MAX 30	// 전처리기로 MAX 숫자에 값을 10으로 전부 치환

int main() {

	// 맵의 크기
	SetConsoleSize(30, 30);
	// 커서 없애기
	SetConsoleCursorVisibility(0);

	int x= 14, y = 28;	// 플레이어의 좌표
	int bx = 0, by = 0;	// 총알의 좌표
	bool bullet = false;	// 현재 총알이 생성되지 않았으면 false, 생성 됐으면 true

#if false	// 별이 한 개씩 떨어지는 코드(비활성화)

	int ex = 0, ey = 0;	// 별의 좌표
	bool enemy = false;	// 별이 시작할 때 false, 생성될 때 true
	int ex2 = 0, ey2 = 0;
	bool enemy2 = false;

#endif

	int ex[MAX] = { 0 };
	int ey[MAX] = { 0 };
	bool enemy[MAX] = { false };
	srand(time(NULL));

#if true	// 플레이어의 이동 조작

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
		printf("●");

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
			printf("↑");

			if (by < 1) bullet = false;
		}

#endif

#if false

		if (enemy) {
			GotoXY(ex, ey);
			printf("☆");
			ey++;

			if (ey > 28) enemy = false;
		}

		if (enemy2) {
			GotoXY(ex2, ey2);
			printf("☆");
			ey2++;

			if (ey > 28) enemy2 = false;
		}

#endif

		for (int i = 0; i < MAX; i++) {
			if (enemy[i]) {
				GotoXY(ex[i], ey[i]);
				printf("☆");
				ey[i]++;

				if (ey[i] > 28) enemy[i] = false;
			}
		}

		Sleep(50);	// 입력값 만큼 기다렸다가 다시 실행
	}

}