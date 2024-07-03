#include <stdio.h>
#include "Console.h"
#include <stdbool.h>
#include "time.h"
#include <stdlib.h>
#include <conio.h>

#define MAX 30	// 전처리기로 MAX 숫자에 값을 10으로 전부 치환
#define BG 15

void GameStart(void) {
	while (true) {
		Clear();
		GotoXY(8, 9);
		printf("별 피하기 게임");
		GotoXY(8, 20);
		printf("키를 입력하여 시작");
		if (_kbhit()) break;
	}
}

void GameOver(void) {
	Clear();
	int temp;
	printf("GAME OVER\n");
	printf("게임 종료를 원하면 아무키나 누르고 엔터를 누르세요\n");
	scanf_s("%d", &temp);
}

int main() {

	SetTitle("별 피하기 게임");
	// 맵의 크기
	SetConsoleSize(30, 30);
	// 커서 없애기
	SetConsoleCursorVisibility(0);
	SetColor(BG, 0);

	int score = 0;	// 점수

	bool isPlayerDead = false;
	int x= 14, y = 28;	// 플레이어의 좌표
	int bx = 0, by = 0;	// 총알의 좌표
	bool bullet = false;	// 현재 총알이 생성되지 않았으면 false, 생성 됐으면 true

#if false	// 별이 한 개씩 떨어지는 코드(비활성화)

	int ex = 0, ey = 0;	// 별의 좌표
	bool enemy = false;	// 별이 시작할 때 false, 생성될 때 true
	int ex2 = 0, ey2 = 0;
	bool enemy2 = false;

#endif

	// 별
	int ex[MAX] = { 0 };
	int ey[MAX] = { 0 };
	bool enemy[MAX] = { false };
	srand(time(NULL));

	GameStart();

#if true	// 플레이어의 이동 조작

	while (true) {

		Clear();
		GotoXY(0, 0);
		printf("점수 : %d", score);
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
				SetColor(BG, rand() % 15);
				GotoXY(ex[i], ey[i]);
				printf("☆");
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

		// 플레이어가 살아 있을 때의 위치
		if (!isPlayerDead) {
			SetColor(BG, 12);
			GotoXY(x, y);
			printf("●");
		}
		else {
			GotoXY(x, y);
			printf("○");
			break;
		}

		Sleep(100);	// 입력값 만큼 기다렸다가 다시 실행
	}

	GameOver();

}