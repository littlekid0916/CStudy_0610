/*
	작성자 : 류희원
	작성일 : 2024-06-25
	학습내용 : 반복문의 이해와 실습
*/

/*
	반복문(iteration statements) : 프로그램 내에서 똑같은 명령을 일정 횟수만큼 반복하여 수행하도록 제어하는 명령문

	for
	자체적으로 초기식, 조건식, 증감식을 모두 포함하고 있는 반복문

	for문 예)
	for(초기식; 조건식; 증감식) {
		조건식의 결과가 참인 동안 반복적으로 실행하고자 하는 명령문;
	}


	while
	특정 조건을 만족할 때까지 계속해서 주어진 명령문을 반복 실행

	while문 예)
	while (조건식) {
		조건식의 결과가 참인 동안 반복적으로 실행하고자 하는 명령문;
	}


	do / while
	while 문은 루프에 진입하기 전에 먼저 조건식부터 검사하지만
	do / while 문은 먼저 루프를 한 번 실행한 후에 조건식을 검사

	do / while문 예)
	do {
		조건식의 결과가 참인 동안 반복적으로 실행하고자 하는 명령문;
	} while (조건식);

*/

#include "lectures.h"

void lecture12() {

	for (int i = 0; i < 10; i++) {
		printf("i++ : %d\n", i);
	}

	int index;
	for (index = 10; index > 0; index--) {
		printf("index : %d\n", index);
	}

	for (int i_num = 0; i_num < 10; i_num += 2) {
		printf("i_num : %d\n", i_num);
	}

}

void lecture12_2() {

	printf("문제1\n");
	// for문을 이용하여 반복 횟수를 입력 받아서 출력
	int i_scanfNum;
	printf("반복문 실행 횟수 : \n");
	scanf_s("%d", &i_scanfNum);
	for (int i = 0; i < i_scanfNum; i++) {
		printf("i_scanfNum : %d\n", i_scanfNum);
	}

	printf("문제2\n");
	// 1이상 100미만의 정수들 중에서 7의 배수와 9의 배수만 출력
	// 공통된 배수는 한 번만 출력
	for (int i = 1; i < 101; i++) {
		if (i % 7 == 0 || i % 9 == 0) {
		printf("%d\n", i);
		}
	}

	printf("문제3\n");
	// while문을 이용하여 반복 횟수를 입력 받아서 출력
	int w_num;
	printf("반복문 실행 횟수 : \n");
	scanf_s("%d", &w_num);
	while (w_num > 0) {
		printf("while : %d\n", w_num);
		w_num--;
	}

}

void lecture12_3() {

	int i = 0;
	while (i < 10) {
		printf("while : %d\n", i);
		i++;
	}
	
	int i_doNum = 1;
	do {
		printf("한 번은 반드시 출력\n");
		i_doNum = i_doNum * 3;
	} while (i_doNum < 10);
}