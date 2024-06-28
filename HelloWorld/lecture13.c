/*
	작성자 : 류희원
	작성일 : 2024-06-26
	학습내용 : break, continue
*/

/*
*   for 반복문, while 반복문
*   반복적인 내용을 간결하게 표현.
*   break, continue.. (반복문, 조건문 - 제어문) 제어해주는 방법
*   for, while, do while, switch 사용을 합니다.
*/

/*
*  break   : 제어흐름에서 벗어나기 위해 사용합니다. break 선언되면 해당 제어문에서 빠져 나옵니다.
* continue : 제어흐름을 유지한 상태로 해당 코드의 실행만 건너 뛰는 기능을 합니다.
*/

#include "lectures.h"

void lecture13()
{
	// printf 10번 반복하는 코드를 for 반복문.
	// 0번 부터 ~ 특정 숫자까지 반복해서 아래의 코드를 실행하는데,
	// 내가 원하는 목표값에 도달하면
	for (int i = 0; i < 10; i++)
	{
		printf("Hi %d\n", i);

		if (i == 7)
		{
			printf("i가 7일 때 출력됨\n");
			break;
		}

	}
	int index = 0;
	for (; ;)  // 무한 반복문. ctrl + c
	{
		index++;
		printf("hi %d\n", index);
		if (index == 7)
		{
			printf("7이 출력되었습니다. \n");
			break;
		}
	}

	// 
	int targetNumber;  // 여러분이 출력하고자 하는 목표 숫자(scanf_s)
	//int counter = 0;   // 반복문에서 targetnumber를 찾기 위한 변수	  
	//scanf_s("%d", &targetNumber);
	//
	//for (; ;)
	//{
	//	counter++;
	//	if (targetNumber == counter)
	//	{
	//		printf("원하는 결과 값이 출력되었습니다. %d\n", targetNumber);
	//		break;
	//	}
	//}

	// while 반복문
	scanf_s("%d", &targetNumber);
	int w_counter = 0;
	//while (1) // 무한 반복문
	//{
	//	w_counter++;
	//	if (targetNumber == w_counter)
	//	{
	//		printf("원하는 결과 값이 출력되었습니다. %d\n", targetNumber);
	//		break;
	//	}
	//	// for 반복문에서 타겟넘버를 찾는 코드와 같은 내용을 구현해보세요.
	//	// break를 사용을 하셔야 합니다.
	//}

	// continue 사용 예시
	int w_num = 0;
	while (w_num < 10)
	{
		w_num++;
		if (w_num % 2 == 0)
		{
			continue;
		}
		printf("%d \n", w_num);
	}

	// 주사위를 굴릴거에요. 주사위에는 12개의 면이 있습니다. Scanf_s 여러분이 주사위의 눈을 조작하세요. (완료)
	// 만약에 주사위가 짝수가 나온다면, 현재 여러분이 갖고 있는 돈에 소지금이 2배가 되고,	  (분기 구현 완료)
	// 만약에 홀수가 나온다면, 여러분이 갖고 있는 소지금이 0원이 되는 코드를 작성해보세요.  ( 소지금 코드 구현)
	// 만약에 소지금이 0원이 된다면 프로그램을 종료해주는 프로그램을 만들어 본다.

	printf("주사위 예제 시작 \n");

	// 0 ~ 12숫자를 scanf_s 출력
	printf("여러분이 지금 타짜여서 주사위의 숫자를 골라주세요(0 ~ 12) : ");
	int diceNum, gameMoney;
	// 지금 코드의 문제점 12 보다 큰숫자, 0보다 작은 숫자를 입력하면 그 숫자가 diceNum에 출력이 됩니다. 이것을 수정하는 코드
	scanf_s("%d", &diceNum);
	gameMoney = 1000;  // 기본 소지금 1000원

	while (1) // while 탈출 조건을 
	{
		if (diceNum < 1 || diceNum > 12)
		{
			printf("잘못된 주사위의 크기를 입력했습니다. \n 주사위 크기를 다시 입력해주세요 : \n");
			scanf_s("%d", &diceNum);
		}
		else
		{
			// 짝수인지 홀수인지 판별하는 코드를 작성해야 한다. 1 ~ 12
			if (diceNum % 2 == 0)  // 짝수
			{
				gameMoney = gameMoney * 2;

				if (gameMoney > 5000) // 게임 승리 조건 
				{
					printf("게임에서 승리했습니다. 보유 금액은 : %d 입니다.\n", gameMoney);
					break;
				}
				else
				{
					printf("현재 보유 중인 금액 : %d \n", gameMoney);
					scanf_s("%d", &diceNum);
				}
			}
			else // 홀수
			{
				gameMoney = 0;
				printf("당신은 게임에서 졌습니다. 보유 금액은 : %d \n", gameMoney);
				break;
			}
		}
	}


}



/*
*  if ~ else if ~ else 코드를 제어하는 방법을 배웠습니다.
*
*  또다른 조건문 Switch -  break;
*
*  Switch( 변수 )
*  {
*	   case 변수의 값 :
*	   실행되는 코드
	   break;
	   ...
	   ...
	   ...
	   default :
	   break;
*  }
*
*  형식이 균일한, 처리해야할 조건이 다양할 때 사용하는 조건문 입니다.
*/

void lecture13_2()
{
	int num;
	scanf_s("%d", &num);

	// 아래 switch문을 if ~ else if ~ else로 바꾸어 보세요
	switch (num)
	{
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

	//if(num == 0)
	//    printf("num은 0입니다.\n");
	//else if(num == 1)
	//    printf("num은 1입니다.\n");
	//else if(num == 2)
	//    printf("num은 2입니다.\n");
	//else
	//    printf("num은 0 ~ 2 이외의 값입니다.\n");

	// swtich문의 기본 사용법에 대해 학습하였습니다.
	// break가 없으면 어떻게 될까요?

	switch (num)
	{
	case 0:
	case 1:
		printf("0,1의 값이 나올 확률 : \n");
		break;
	case 2:
	case 3:
	case 4:
		printf("2,3,4의 값이 나올 확률 : \n");

	default:
		printf("num은 0 ~ 2 이외의 값입니다.\n");
	}


	// switch( )   // int 정수를 입력했습니다.
	// ( ) 안에 올 수 있는 데이터 타입은 정수형!
	// float, dobule 실수형 데이터 타입의 값을 넣으면 에러가 발생합니다.

	char d_num = 1;

	switch (d_num)     // case :  case와 :(콜론) 사이에 들어가는 값은. 정수가 아니고,  정수의 값으로 반환되는 식이여도 상관이 없다.  
		// 가능은 하지만, switch ~ case문을 사용하는 이유는 가독성을 사용을 합니다.
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