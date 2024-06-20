/*
	작성자 : 류희원
	작성일 : 2024-06-20
	학습내용 : c언어 기본 자료형, 상수
*/

/*
	자료형 : 저장되는 데이터의 종류에 따른 형태로 저장되는 값의 종류와 범위에 따라 다르게 표현

	정수형
	char : 1바이트(8비트) -128 ~ 127
	short : 2바이트(16비트) -32,768 ~ 32,767
	int	: 4바이트(32비트) -2,147,483,648 ~ 2,147,483,647
	long : 4바이트(32비트) -2,147,483,648 ~ 2,147,483,647
	long long : 8바이트(64비트) -9,223,372,036,854,775,808 ~ 9,223,372,036,854,775,807

	실수형
	float : 4바이트(32비트) ±3.4x10^-37 ~ ±3.4x10^+38(소수점 6자리까지 표현)
	double : 8바이트	(64비트) ±1.7x10^-307 ~ ±1.7x10^+308(소수점 15자리까지 표현)
	long double : 8바이트 이상 double 이상의 표현범위(소수점 18자리까지 표현)
*/

/*
	sizeof : 메모리 공간을 소모하는 크기를 byte 단위로 바꿔서 출력

	unsigned : 양수만을 저장하여 두 배 넣은 범위의 값을 저장 
*/

/*
	상수(Constant) : 값이 고정되어 변경할 수 없는 메모리 공간
	상수의 종류 : 이름을 갖지 않는 리터럴 상수 (Literal), 이름을 갖는 심볼릭 상수(symbolic)
	리터럴 상수에서 정수는 기본 자료형이 int이고 int보다 큰 수가 입력되면 자동으로 int 보다 큰 데이터 형을 선택
	실수는 double

	리터럴 상수
	long -> 값L
	unsigned -> UL
	long long -> LL
	usgined long long -> ULL
	float -> F

	심볼릭 상수
	const 사용
	선언과 동시에 초기화를 해야함, 변수명은 대문자로 작성
	예) const 자료형 변수명 = 값;

	전처리기(#define) 사용
	대문자로 작성
*/

#include "lectures.h"

void lecture9() {
	
	// sizeof 연산자를 사용해서 데이터형 출력
	printf("char 데이터 크기 : %d\n", sizeof(char));
	printf("short 데이터 크기 : %d\n", sizeof(short));
	printf("int 데이터 크기 : %d\n", sizeof(int));
	printf("long 데이터 크기 : %d\n", sizeof(long));
	printf("long long 데이터 크기 : %d\n", sizeof(long long));
	printf("float 데이터 크기 : %d\n", sizeof(float));
	printf("double 데이터 크기 : %d\n", sizeof(double));
	printf("long double 데이터 크기 : %d\n", sizeof(long double));

	// 리터럴 상수로 sizeof 연산자로 출력
	// sizeof(5); 등 어떤 데이터를 출력하는지 보기

	// 직사각형의 넓이를 구하는 프로그램을 작성
	printf("첫번째 좌표 : \n");
	int xpos1, ypos1;
	scanf_s("%d %d", xpos1, ypos1);
	printf("두번째 좌표 : \n");
	int xpos2, ypos2;
	scanf_s("%d %d", xpos2, ypos2);
	printf("직사각형의 넓이 : %d", );
	// xpos2가 xpos1보다 커야함
	// xpos2 - xpos1 길이로 하는 직사각형을 구해야함
	// (4,6)(6,8) 2*2=4


}