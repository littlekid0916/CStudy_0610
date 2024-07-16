/*
	작성자 : 류희원
	작성일 : 2024-07-16
	학습내용 : 포인터의 인자를 함수에 사용, Call by Value와 Call by Reference의 이해
*/

void AddArrayElement(int* arr, int len, int add) {
	for (int i = 0; i < len; ++i) {
		arr[i] += add;
		printf("%d", arr[i]);
	}
	printf("\n");
}


// Call by Value VS Call by Reference

// 함수 호출 시 기본적으로 외부에 영향을 주지 못함
void Call_by_Value(int _num) {
	_num += 10;
}

// 역참조 연산자를 사용하여 함수 외부 주소를 참조해서 값을 변경
void Call_by_Reference(int* _numPtr) {
	*_numPtr += 10;
}

#include "lectures.h"

void SquareByValue_20(int num) {
	num = num * num;
	printf("함수 안에서 실행된 b의 값 : %d\n", num);
}

void SquareByRef_20(int* numPtr) {
	*numPtr = *numPtr * (*numPtr);
}

void ChangeElement(int* a, int* b, int* c) {
	int temp;
	temp = *a;
	*a = *b;
	*b = *c;
	*c = temp;
}

void ChangeElement_2(int a, int b, int c) {
	int temp = a;
	a = b;
	b = c;
	c = temp;
	printf("Call by Value 함수 : %d %d %d\n", a, b, c);
}

int global_val_l20 = 30;

void DoublePointerCallByRef(int** ref) {
	*ref = &global_val_l20;
}

void DecimalToBinaray(int num) {
	int binaray[20];
	int pos = 0;
	
	while (num != 0) {
		binaray[pos] = num % 2;
		pos += 1;
		num /= 2;
	}

	for (int i = pos - 1; i >= 0; --i) {
		printf("%d", binaray[i]);
	}
}

void lecture20() {

	int arr[3] = { 0, 1, 2 };
	AddArrayElement(arr, 3, 5);

	int num = 10;

	Call_by_Value(num);
	printf("Call_by_Value num의 값 : %d\n", num);
	Call_by_Reference(&num);
	printf("Call_by_Reference num의 값 : %d\n", num);

	// 문제1
	printf("문제1\n");
	int b= 3;
	SquareByValue_20(b);
	printf("함수 밖에서 실행된 b의 값 : %d\n", b);
	SquareByRef_20(&b);
	printf("b의 값 : %d\n", b);

	// 문제2
	printf("문제2\n");
	int t1 = 10, t2 = 20, t3 = 30;
	ChangeElement(&t1, &t2, &t3);
	ChangeElement_2(t1, t2, t3);
	printf("%d %d %d\n", t1, t2, t3);


	// 이중포인터
	printf("\n이중포인터\n");

	int p1 = 10;
	int p2 = 20;
	int* p1Ptr = &p1;
	int* p2Ptr = &p2;
	int* p3Ptr = NULL;

	p3Ptr = &global_val_l20;

	DoublePointerCallByRef(&p1Ptr);
	printf("%d", *p1Ptr);

	// 문제3
	// 10진수를 2진수로 변환해서 출력
	printf("문제3\n");

	int input;
	scanf_s("%d", &input);

	DecimalToBinaray(input);

}