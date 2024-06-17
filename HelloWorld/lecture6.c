/*
	작성자 : 류희원
	작성일 : 2024-06-17
	학습내용 : 디버깅

	디버깅 : 프로그래밍을 하면서 작성한 논리적인 문제를 해결하기 위해 문제가 의심가는 부분에
	코드의 중단점을 생성하고 실제로 컴퓨터의 계산결과를 눈으로 확인할 수 있다.

	
	Operator 연산자
	대입 연산자
	= : 오른쪽 값을 왼쪽 변수에 넣어준다

	복합 대입 연산자
	+=, -=, *=, /=, %=, <=, >=, &=, ^=, |=

	증가, 감소 연산자
	++, --
	전위 증가 : 
	후위 증가 : 

	관계 연산자
	비교 연산자 : 두 개의 값을 비교하여 그 관계를 표현. 결과 값이 true(1), false(0)으로 나온다.

	논리 연산자
	AND(&&) : A와 B가 모두가 참
	OR(||) : A와 B중 하나라도 참
	NOT(!) : 

	연산 결합 순위
	int a = (a == 10 && b == 12);
	int b = (a < 12 || b > 12);
	int c = !a

*/

#include "lectures.h";

void lecture6() {

	printf("디버깅 예제 문제\n");
	char a, b, c;
	a = 100;
	b = 300;
	c = a + b;
	printf("%d + %d = %d\n", a, b, c);

	printf("연산자 예제 문제\n");
	int num1, num2, num3, result;
	scanf_s("%d %d %d", &num1, &num2, &num3);
	printf("계산 결과(L-Value) = %d X %d + %d = %d\n", num1, num2, num3, num1 * num2 + num3);
	scanf_s("%d", &result);
	printf("복합대입연산자 결과 : %d += %d = %d\n", result, num1, result + num1);

	printf("증가, 감소 연산자 예제 문제\n");
	int plusA = 10;
	int plusB = (plusA++) + 2;
	printf("plusB의 값은 : %d\n", plusB);

	printf("결과 : %d\n", num1 < num3);

	printf("연산자 우선 순위 예제 문제\n");
	int variableA = 3 + 4 * 5;
	int	variableB = 7 / 3 % 2; 
	int final = variableA > variableB;
	printf("결과 : %d", final);
}
