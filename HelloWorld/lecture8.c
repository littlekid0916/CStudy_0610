/*
	작성자 : 류희원
	작성일 : 2024-06-19
	학습내용 : 코드로 2진법 10진법 16진법 작성해서 데이터로 넘기기
*/

/*
	2진수, 8진수, 16진수로 표현하는 방법
	2진수 : "0b"
	8진수 : "0"
	16진수 : "0x"A

	printf로 8진수 표현 %o, 16진수 표현 %x
*/

/*
	소수를 표현하는 방법
	1. 비트를 n : m 으로 분할한 후 n만큼 정수로 사용하고 m만큼 소수로 사용
	문제점 : 소수를 자세히 표현하려면 정수를 표현할 공간이 적어진다
	2. 2e-1, 2e-2, 2e-3 자리수에 0 또는 1 값을 더해서 표현
	3. 고정 소수점 방식(fixed point) : 정수를 표현하는 비트의 수와 솟수를 표현하는 비트 수를 고정시켜서 표현
	4. 부동 소수점 방식(float point) : 정수 부분과 소수 부분의 비율에 따라 소수점을 출력하는 위치를 변경

	8.625 -> 0b100.101
*/

/*
	비트 표현 방법
	비트 부호 : &, |, ^, ~
	비트 이동(shift) 부호 : <<, >>

	&(AND) : 두 개의 비트가 모두 1일 때 1을 반환
	|(OR) : 두 개의 비트 중 하나라도 1이면 1을 반환
	^(XOR) : 두 개의 비트가 서로 다른 경우에 1을 반환
	~(NOT) : 비트를 0에서 1로, 1에서 0으로 반전
	<< : 비트를 왼쪽으로 이동
	>> : 비트를 오른쪽으로 이동
*/

#include "lectures.h";

void lecture8() {

	// 정수 a_num 선언 후 숫자 15를 넣어 출력
	int a_num = 15;
	printf("a_num의 10진수 표현 값 : %d\n", a_num);

	a_num = 0b1111;
	printf("a_num의 2진수 표현 값 : %d\n", a_num);

	a_num = 017;
	printf("a_num의 8진수 표현 값 : %o\n", a_num);

	a_num = 0xF;
	printf("a_num의 16진수 표현 값 : %X\n", a_num);

	int b_num = -255;	// 255를 2의 보수한 값, 255를 2진법으로 표현 -> 0b 00000000 00000000 00000000 11111111
						// 255로 표현한 반전 0b 11111111 11111111 11111111 00000001
	b_num = 0b11111111111111111111111100000001;
	printf("b_num의 값 : %d\n", b_num);


	float a_float = 0.25;
	printf("a_float의 값 : %f\n", a_float);


	// 0.1 + 0.2가 0.3과 같은지 관계 연산자로 표현
	printf("부동 소수점의 에러\n");
	int bool = (0.1 + 0.2) == 0.3;
	printf("true면 1을 출력, false면 0을 출력 : %d\n", bool);

	float c_num = 0.0;
	for (int number = 0; number < 30; number++) {
		c_num += 0.1;
	}
	printf("c_num에 0.1을 30번 더한 값 : %f\n", c_num);


	// 기호를 사용하지 않고 비트 연산 결과 출력
	printf("문제1\n");
	int d = 0b00001111;
	int e = 0b00010010;
	int my_int = 0b00000010;
	int result = d & e;
	printf("예상한 값 : %d, 실제 값 : %d\n", my_int, result);

	printf("문제2\n");
	d = 0b0001111;
	e = 0b0010010;
	my_int = 0b0011111;
	result = d | e;
	printf("예상한 값 : %d, 실제 값 : %d\n", my_int, result);

	printf("문제3\n");
	d = 0b0001111;
	e = 0b0010010;
	my_int = 0b0011101;
	result = d ^ e;
	printf("예상한 값 : %d, 실제 값 : %d\n", my_int, result);

	// 실제 값 예상하고 이유 생각해보기
	printf("문제4\n");
	char overFlowedValue = 0b01000000;
	overFlowedValue << 2;
	printf("%d\n", overFlowedValue);

	printf("문제5\n");
	overFlowedValue = 0b0000100;
	overFlowedValue >> 5;
	printf("%d\n", overFlowedValue);

	// 10진수 하나를 입력 받고 ~연산자를 사용하여 해당 수의 2의 보수 값을 출력
	printf("문제6\n");
	int twoComplement;
	scanf_s("%d", &twoComplement);
	printf("2의 보수 값 : %d\n", ~twoComplement + 1);

	// 10진수 하나를 입력 받고 해당 수에 8를 곱한 후 32로 나누는 코드를 *,/ 없이 작성
	// 8과 32가 반드시 코드에 들어가고 비트 연산자(<<, >>) 사용
	printf("문제7\n");
	char shiftNum = 64;
	scanf_s("%d", &shiftNum);/*
	shiftNum = shiftNum << 3 >> 5;*/
	shiftNum = shiftNum << 3;
	shiftNum = shiftNum >> 5;
	printf("8을 곱한 후 32로 나눈 값 : %d\n", shiftNum);

	/*
		양의 정수 범위 : 0b01111111 : 1 ~ 127
		음의 정수 범위 : 0b10000000 : -128 ~ -1
					: 0b11111111 : -1
	*/
}