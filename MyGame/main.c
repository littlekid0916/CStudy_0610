#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "countNumFunc.h"

int main(void) {

	//setColor(0, 1);	// 0 ~ 15
	//srand(time(NULL));

	//// 플레이어를 환영하는 텍스트 출력
	//startGameSetting();
	 
	//system("cls");
	
	//int computerVale;
	//int userValue;

	//for (int i = 4; i >= 0; i--) {

	//	computerVale = rand() % 5 + 1;
	//	scanf_s("%d", &userValue);
	//	printf("컴퓨터 : %d 나 : %d\n", computerVale, userValue);

	//	if (userValue == computerVale) {
	//		gameWin();
	//		break;
	//	}
	//	else if (userValue != computerVale) {
	//		if (userValue > computerVale && i >= 1) {
	//			printf("컴퓨터 보다 큽니다. 다시 시도해보세요. 남은 기회 : %d\n", i);
	//		}
	//		else if (userValue < computerVale && i >= 1) {
	//			printf("컴퓨터 보다 작습니다. 다시 시도해보세요. 남은 기회 : %d\n", i);
	//		}
	//		else if (i == 0) {
	//			printf("남은 기회를 전부 소진했습니다.\n");
	//		}
	//	}
	//}



	// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

	setColor(0, 1);	// 0 ~ 15
	srand(time(NULL));

	int computerValue = rand() % 5 + 1;
	int userValue;
	int playerHP = setPlayerHP();
	
	startGameSetting();
	printf("게임 시작!\n");
	printf("플레이어의 값을 입력해주세요.\n");
	userValue = inputNumber();
	printf("컴퓨터의 값은 %d 입니다.\n", computerValue);
	printf("플레이어의 값은 %d 입니다.\n", userValue);

	system("cls");	// 함수로 만들어보기

	while (1) {
		if (computerValue == userValue) {
		// 함수화_1 : GameWin() 게임에서 승리를 구현하는 함수를 만들어보세요.
			gameWin();
			break;
		}
		else {
			// 만약 플레이어의 현재 체력이 0보다 작거나 같으면 게임을 종료시켜라.
			if (playerHP <= 0) {
				printf("게임 종료\n");
				break;
			}

			// 함수화_2 : 플레이어의 체력을 감소 시키고 숫자를 다시 맞출 기회를 주는 코드를 함수화 시켜 볼겁니다.

			// 플레이어의 체력을 감소시킨다.
			playerHP--;
			// 다시 플레이어가 숫자를 맞출 기회를 준다.
			printf("플레이어의 값을 입력해주세요.\n");
			userValue = inputNumber();
		}
	}


	return 0;
}