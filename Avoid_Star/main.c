#include <stdio.h>
#include "Console.h"
#include <stdbool.h>

int main() {

	// 맵의 크기
	SetConsoleSize(30, 30);
	// 커서 없애기
	SetConsoleCursorVisibility(0);

	int x= 14, y = 28;	// 플레이어의 좌표
	int bx = 0, by = 0;	// 총알의 좌표
	bool bullet = false;	// 현재 총알이 생성되지 않았으면 false, 생성 됐으면 true

	while (true) {

		Clear();

#if true	// 플레이어의 이동 조작

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

		Sleep(50);	// 입력값 만큼 기다렸다가 다시 실행
	}

}