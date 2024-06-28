/*
	작성자 : 류희원
	작성일 : 2024-06-28
	학습내용 : 지역변수와 전역변수
*/

/*
	지역 변수(local variable)
	'블록' 내에서 선언된 변수를 의미
	변수가 선언된 블록 내에서만 유효하며 블록이 종료되면 메모리에서 사라진다
	메모리상의 스택(stack) 영역에 저장되며, 초기화하지 않으면 의미 없는 값(쓰레기값)으로 초기화

	전역 변수(global variable)
	함수의 외부에서 선언된 변수를 의미
	프로그램의 어디에서나 접근할 수 있으며 프로그램이 종료되어야만 메모리에서 사라진다
	메모리상의 데이터(data) 영역에 저장되며, 직접 초기화하지 않아도 0으로 자동 초기화

	변수의 존재기간
	중괄호가 끝날 때 변수도 같이 사라진다

	변수의 접근 범위

	같은 지역 내에서 같은 이름의 변수를 선언할 수 없다
	전역변수는 사용을 지향해야 한다

	1. return으로 값 넘겨주기
*/

#include "lectures.h"

int count;

int simpleFunc() {

	count++;
	int num = 10;
	num++;
	printf("num의 값 : %d\n", num);

	return num;
}

void plusOne(int a, int b) {
	
	a++;
	b++;
}

void lecture15() {

	int num = 17;

	printf("전역 변수에 초기화를 하기 전 count의 값 : %d\n", count);
	count = 10;
	printf("count의 값 : %d\n", count);

	simpleFunc();
	printf("num의 값 : %d\n", num);
	printf("count의 값 : %d\n", count);

	int count1 = 4, count2 = 6;
	plusOne(count1, count2);
	printf("count의 값 : %d\n", count);

	static int stadic_num;
	printf("stadic_num의 값 : %d\n", stadic_num);
	
	printf("count1의 값 : %d, count2의 값 : %d\n", count1, count2);

}