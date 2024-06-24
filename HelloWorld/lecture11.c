/*
	작성자 : 류희원
	작성일 : 2024-06-24
	학습내용 : 코드의 흐름 제어
*/

/*
	조건문(conditional statements) : 주어진 조건식의 결과에 따라 별도의 명령을 수행하도록 제어하는 명령문

	주의점
	1. 조건식 뒤에 ;(세미콜론)을 붙이면 안 된다
	2. '='와 '==' 구분할 것 (c언어는 조건문의 조건식에서 0이외의 숫자는 참으로 인식함)

	if
	조건식의 결과가 참(true)이면 주어진 명령문을 실행하며 거짓(false)이면 아무것도 실행하지 않는다
	실행될 명령문이 한 줄 뿐이라면 중괄호를 생략할 수 있다

	if문 예)
	if(조건식) {
		조건식의 결과가 참일 때 실행하고자 하는 명령문;
	}


	if / else
	if 문과는 반대로 주어진 조건식의 결과가 거짓(false)이면 주어진 명령문을 실행
	else 문에서도 실행될 명령문이 한 줄뿐이라면 중괄호를 생략할 수 있다

	if / else문 예)
	if(조건식) {
		조건식의 결과가 참일 때 실행하고자 하는 명령문;
	}
	else {
		조건식의 결과가 거짓일 때 실행하고자 하는 명령문;
	}


	if / else if / else
	if 문처럼 조건식을 가질 수 있기 때문에 중첩된 if 문을 좀 더 간결하게 표현

	if / else if / else문 예)
	if(조건식1) {
		조건식1의 결과가 참일 때 실행하고자 하는 명령문;
	}
	else if (조건식2) {
		조건식2의 결과가 참일 때 실행하고자 하는 명령문;
	}
	else {
		조건식1, 조건식2의 결과가 거짓일 때 실행하고자 하는 명령문;
	}
*/

#include "lectures.h"

void lecture11() {

	// 정수
	int num1 = 10;	// 정수형 변수 num1 선언후 10 할당

	if(num1 == 10){
		printf("10입니다\n");
	}

	if(num1 == 10) printf("중괄호 없는 if문\n");

	// 실수
	float f_num1 = 0.1f;

	if(f_num1 == 0.1f) {
		printf("0.1f입니다\n");
	}

	// 근사치 주의
	if(f_num1 == 0.05f + 0.05f) {
		printf("0.05f + 0.05f = 0.1f입니다\n");
	}

	// 문자
	char c_num1 = 'A';

	if(c_num1 == 'A') {
		printf("A입니다\n");
	}

	if (c_num1 == 65) {
		printf("A(65)입니다\n");
	}

	// scanf_s 사용하여 조건문 작성
	int num2;
	int targetNumber = 40;
	printf("숫자를 입력하세요 : \n");
	scanf_s("%d", &num2);
	if (num2 == targetNumber) {
		printf("딩동댕\n");
	}
	if (num2 != targetNumber) {
		printf("땡\n");
	}

	int c_num2 = 'k';
	if (c_num2 == 'k') {
		printf("k입니다\n");
	}
	if (c_num2 != 'k') {
		printf("k가 아닙니다\n");
		c_num2 = 'k';
		printf("%c\n", c_num2);
	}

	/*
		문제1
		게임이 종료되면 플레이어는 점수를 획득
		이 점수를 score라는 정수형 변수에 저장
		scanf_s 함수를 사용하여 score 점수를 넣을 수 있게 작성하고 score의 점수가
		90점 이상이면 A등급, 80점 이상이면 B등급, 70점 이상이면 C등급, 60점 이상이면 D등급 나머지는 F등급을 출력
	*/

	printf("문제1\n");

	int score;
	scanf_s("%d", &score);

	if (score >= 90) {
		printf("A등급\n");
	}
	else if (score >= 80) {
		printf("B등급\n");
	}
	else if (score >= 70) {
		printf("C등급\n");
	}
	else if (score >= 60) {
		printf("D등급\n");
	}
	else if (score < 0, score > 100) {
		printf("점수를 다시 입력하세요.\n");
	}
	else {
		printf("F등급\n");
	}
}