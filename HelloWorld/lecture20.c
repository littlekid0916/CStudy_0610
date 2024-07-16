/*
	�ۼ��� : �����
	�ۼ��� : 2024-07-16
	�н����� : �������� ���ڸ� �Լ��� ���, Call by Value�� Call by Reference�� ����
*/

void AddArrayElement(int* arr, int len, int add) {
	for (int i = 0; i < len; ++i) {
		arr[i] += add;
		printf("%d", arr[i]);
	}
	printf("\n");
}


// Call by Value VS Call by Reference

// �Լ� ȣ�� �� �⺻������ �ܺο� ������ ���� ����
void Call_by_Value(int _num) {
	_num += 10;
}

// ������ �����ڸ� ����Ͽ� �Լ� �ܺ� �ּҸ� �����ؼ� ���� ����
void Call_by_Reference(int* _numPtr) {
	*_numPtr += 10;
}

#include "lectures.h"

void SquareByValue_20(int num) {
	num = num * num;
	printf("�Լ� �ȿ��� ����� b�� �� : %d\n", num);
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
	printf("Call by Value �Լ� : %d %d %d\n", a, b, c);
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
	printf("Call_by_Value num�� �� : %d\n", num);
	Call_by_Reference(&num);
	printf("Call_by_Reference num�� �� : %d\n", num);

	// ����1
	printf("����1\n");
	int b= 3;
	SquareByValue_20(b);
	printf("�Լ� �ۿ��� ����� b�� �� : %d\n", b);
	SquareByRef_20(&b);
	printf("b�� �� : %d\n", b);

	// ����2
	printf("����2\n");
	int t1 = 10, t2 = 20, t3 = 30;
	ChangeElement(&t1, &t2, &t3);
	ChangeElement_2(t1, t2, t3);
	printf("%d %d %d\n", t1, t2, t3);


	// ����������
	printf("\n����������\n");

	int p1 = 10;
	int p2 = 20;
	int* p1Ptr = &p1;
	int* p2Ptr = &p2;
	int* p3Ptr = NULL;

	p3Ptr = &global_val_l20;

	DoublePointerCallByRef(&p1Ptr);
	printf("%d", *p1Ptr);

	// ����3
	// 10������ 2������ ��ȯ�ؼ� ���
	printf("����3\n");

	int input;
	scanf_s("%d", &input);

	DecimalToBinaray(input);

}