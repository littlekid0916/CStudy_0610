/*
	작성자 : 류희원
	작성일 : 2024-06-27
	학습내용 : 함수
*/

/*
	함수를 쓰는 이유
	c언어는 절차지향 프로그래밍 언어

	1. main 함수에 시작되는 프로그래밍에 코드 내용이 길어질수록 코드를 파악하기 힘들고
	기능 유지 보수가 힘들어지고 반복적인 코드가 계속 발생

	함수를 사용해서 코드를 파악하기 쉽게 만든다
	유지 보수를 쉽게 만든다
	반복적인 코드를 줄인다
*/

/*
	함수의 선언
	return : 함수의 목표를 원래 위치로 반환
*/

//	1. 반환값이 있고 매개변수도 있는 함수
int addTwoNumber(int a, int b) {
	int result = a + b;
	printf("a의 값 : %d\n", a);
	return result;
}

//	2. 반환값이 있고 매개변수는 없는 함수
int inputNumber() {
	int number;
	scanf_s("%d", &number);
	return number;
}

//	3. 반환값이 없고 매개변수는 있는 함수
void changeResult(int result) {
	printf("%d으로 결과가 변경 되었습니다\n", result);
}

//	4. 반환값이 없고 매개변수도 없는 함수
void showResult(void) {
	printf("결과를 출력 하겠습니다\n");
	printf("게임이 종료 되었습니다\n");
}

// 두 수를 비교해서 큰 수를 리턴하는 함수 만들기
int compare(int a, int b) {
	if (a > b) {
		return a;
	}
	else if (a < b) {
		return b;
	}
}

// 수 하나를 받아서 그 수의 절대값을 리턴하는 함수 만들기
int absoluteNum(int num) {
	if (num < 0) {
		// 음수
		return num * (-1);
	}
	else {
		// 양수
		return num;
	}
}

// 절대값으로 변경한 두 수를 비교하는 함수 만들기

#include "lectures.h"

void lecture14() {

	// 함수 호출 방법
	// 함수이름();
	int a = 5 + 7;
	printf("a의 값 : %d\n", a);
	a = addTwoNumber(5, 7);
	printf("a의 값 : %d\n", a);

	showResult();

	changeResult(addTwoNumber(5, 7));

	int c = inputNumber();
	printf("%d 값이 출력되었습니다.\n", c);

	int firstNum, secondNum;
	firstNum = inputNumber();
	secondNum = inputNumber();

	int compareAbsValue = compare(absoluteNum(firstNum), absoluteNum(secondNum));
	printf("두 수를 절대값으로 변환한 값 중 큰 값 : %d", compareAbsValue);

}