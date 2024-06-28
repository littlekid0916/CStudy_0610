/*
	작성자 : 류희원
	작성일 : 2024-06-26
	학습내용 : break, continue
*/

/*
	반복문(iteration statements)
	프로그램 내에서 똑같은 명령을 일정 횟수만큼 반복하여 수행하도록 제어하는 명령문


	while 문
	특정 조건을 만족할 때까지 계속해서 주어진 명령문을 반복 실행

	while (조건식) {
		조건식의 결과가 참인 동안 반복적으로 실행하고자 하는 명령문;
	}


	do / while 문
	while 문은 루프에 진입하기 전에 먼저 조건식부터 검사
	하지만 do / while 문은 먼저 루프를 한 번 실행한 후에 조건식을 검사

	do {
		조건식의 결과가 참인 동안 반복적으로 실행하고자 하는 명령문;
	} while (조건식);


	for 문
	while 문과는 달리 자체적으로 초기식, 조건식, 증감식을 모두 포함하고 있는 반복문
	따라서 while 문보다는 좀 더 간결하게 반복문을 표현

	for (초기식; 조건식; 증감식) {
		조건식의 결과가 참인 동안 반복적으로 실행하고자 하는 명령문;
	}

*/

#include "lectures.h"

void lecture13() {

	// for 반복문
	for (int i = 0; i < 10; i++) {

		printf("Hi%d\n", i);

		if (i == 7) {
			printf("i가 7일 때 출력됨\n");
			break;
		}
	}

	int index = 0;
	for (; ;) {
		// 무한 반복문
		index++;
		printf("hi %d\n", index);

		if (index == 7) {
			printf("7이 출력되었습니다\n");
			break;
		}
	}

	int targetNumber;  // 출력하고자 하는 목표 숫자
	int counter = 0;   // 반복문에서 targetnumber를 찾기 위한 변수	  
	scanf_s("%d", &targetNumber);
	
	for (; ;) {
		counter++;
		if (targetNumber == counter) {
			printf("원하는 결과 값이 출력되었습니다. %d\n", targetNumber);
			break;
		}
	}

	// while 반복문
	scanf_s("%d", &targetNumber);
	int w_counter = 0;

	while (1) {
		// 무한 반복문
		w_counter++;
		if (targetNumber == w_counter) {
			printf("원하는 결과 값이 출력되었습니다. %d\n", targetNumber);
			break;
		}
	}

	// continue 사용 예시
	int w_num = 0;
	while (w_num < 10) {
		w_num++;
		if (w_num % 2 == 0) {
			continue;
		}
		printf("%d \n", w_num);
	}


	// 주사위가 짝수가 나온다면, 현재 갖고 있는 소지금이 2배가 되고
	// 홀수가 나온다면 현재 갖고 있는 소지금이 0원이 되는 코드를 작성
	// 소지금이 0원이 된다면 프로그램을 종료

	printf("주사위 예제 시작\n");
	printf("주사위의 숫자를 골라주세요(0 ~ 12) : \n");

	int diceNum, gameMoney;
	scanf_s("%d", &diceNum);
	gameMoney = 1000;  // 기본 소지금 1000원

	while (1) {
		if (diceNum < 1 || diceNum > 12) {
			printf("잘못된 주사위의 크기를 입력했습니다. \n주사위 크기를 다시 입력해주세요 : \n");
			scanf_s("%d", &diceNum);
		}
		else {
			if (diceNum % 2 == 0) {
				// 짝수
				gameMoney = gameMoney * 2;

				if (gameMoney > 5000) {
					// 게임 승리 조건
					printf("게임에서 승리했습니다. 보유 금액은 %d입니다.\n", gameMoney);
					break;
				}
				else {
					printf("현재 보유 중인 금액 : %d\n", gameMoney);
					scanf_s("%d", &diceNum);
				}
			}
			else {
				// 홀수
				gameMoney = 0;
				printf("당신은 게임에서 졌습니다. 보유 금액은 %d입니다.\n", gameMoney);
				break;
			}
		}
	}


}


/*
	switch 문
	형식이 균일한, 처리해야할 조건이 다양할 때 사용하는 조건문
	float, dobule 실수형 데이터 타입의 값을 넣으면 에러 발생

	switch(변수) {
   		case 변수값:
         실행내용
        break;
 		default:
         실행내용
	}

*/

void lecture13_2() {

	int num;
	scanf_s("%d", &num);

	switch (num) {
	case 0:
		printf("num은 0입니다.\n");
		break;
	case 1:
		printf("num은 1입니다.\n");
		break;
	case 2:
		printf("num은 2입니다.\n");
		break;
	default:
		printf("num은 0 ~ 2 이외의 값입니다.\n");
		break;
	}

	if(num == 0)
	    printf("num은 0입니다.\n");
	else if(num == 1)
	    printf("num은 1입니다.\n");
	else if(num == 2)
	    printf("num은 2입니다.\n");
	else
	    printf("num은 0 ~ 2 이외의 값입니다.\n");


	// break가 없으면 어떻게 될까?
	switch (num) {
	case 0:
	case 1:
		printf("0, 1의 값이 나올 확률\n");
		break;
	case 2:
	case 3:
	case 4:
		printf("2, 3, 4의 값이 나올 확률\n");

	default:
		printf("num은 0 ~ 2 이외의 값입니다.\n");
	}


	char d_num = 1;

	switch (d_num)    
	{
	case 'W':
		break;
	case 'A':
		break;
	case 'D':
		break;
	case 'S':
		break;
	}

}