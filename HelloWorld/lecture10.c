/*
	작성자 : 류희원
	작성일 : 2024-06-21
	학습내용 : 자료 형 변환
*/

/*
	형 변환 종류
	암시적 변환 : 데이터 형식을 자동으로 변환
	명시적 변환 : 개발자가 직접 변환

	정수의 승격

	연산자 불일치에 의해 발생하는 자동 형 변환
	서로 다른 데이터형의 연산이 발생했을 때 어떤 자료형으로 우리가 데이터를 맞추어야 할까
	우선도
	int -> long -> long long -> float -> double -> long double

	연산자 자료형 불일치

	형변환 연산자
*/

#include "lectures.h"

void lecture10() {

	int num = 3 + 4.75 + 5.25;
	printf("%d\n", num);

	double num1 = 245;
	int num2 = 3.1415;
	int num3 = 129;
	char ch = num3;

	printf("정수 245를 실수로 : %f\n", num1);
	printf("실수 3.1415를 정수로 : %d\n", num2);
	printf("큰 정수 129를 작은 정수로 : %d\n", ch);

	// 정수의 승격
	short a_num1 = 15, a_num2 = 25;
	short a_num3 = a_num1 + a_num2;

	int d_num1 = 3, d_num2 = 4;
	double divResult = d_num1 / d_num2;
	printf("내가 생각한 값 : 0.75000 실제 값 : %lf\n", divResult);
	divResult = (double)d_num1 / d_num2;
	printf("형 변환한 값 : %lf\n", divResult);
}