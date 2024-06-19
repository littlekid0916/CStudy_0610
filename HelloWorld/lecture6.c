/*
	작성자 : 류희원
	작성일 : 2024-06-17
	학습내용 : 디버깅
*/

/*	디버깅: 프로그래밍을 하면서 작성한 논리적인 문제를 해결하기 위해 문제가 의심가는 부분에
	코드의 중단점을 생성하고 실제로 컴퓨터의 계산결과를 눈으로 확인할 수 있다.

	연산자(Operator)
	대입 연산자(assignment operator)
	= : 오른쪽 값을 왼쪽 변수에 넣어준다
	복합 대입 연산자
	+=, -=, *=, /=, %=, <=, >=, &=, ^=, |=

	증감 연산자(increment and decrement operator)
	++num : 먼저 피연산자의 값을 1 증가시킨 후에 해당 연산을 진행함.
	num++ : 먼저 해당 연산을 수행하고 나서, 피연산자의 값을 1 증가시킴.

	관계 연산자

	비교 연산자(comparison operator) : 피연산자 사이의 상대적인 크기를 판단
	결과 값이 true(1), false(0)으로 나온다.
	==, !=, >, >=, <, <=

	논리 연산자(logical operator)
	&&(AND) : 논리식이 모두 참이면 1을 반환
	||(OR) : 논리식 중에서 하나라도 참이면 1을 반환
	!(NOT) : 논리식의 결과가 참이면 0을, 거짓이면 1을 반환

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
