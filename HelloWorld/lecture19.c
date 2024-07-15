/*
	�ۼ��� : �����
	�ۼ��� : 2024-07-15
	�н����� : �����Ϳ� �迭�� ����, �����Ϳ� ���
*/

/*
	�����Ϳ� �迭�� ����
	�迭�� �̸��� �� ���� ������ �� ���� ������ ���� �����ϸ� �����Ϳ� ����
	���� �迭�� �̸��� ������ ���(constant pointer)�̴�

	������ ���(constant pointer)
	������ ������ ����Ű�� �ִ� �ּ� ���� ������ �� ���� ������

	��� ������(pointer to constant)
	����� ����Ű�� ������

	����� ����Ű�� �� ��ü�� ����� ������ constant pointer to constant
*/

#include "lectures.h"

void ShowData(const int* ptr) {
	const int* rPtr = ptr;
	printf("%d\n", *rPtr);
	//*rPtr = 20;
}

void ShowAllData(int* const arr, int len) {
	for (int i = 0; i < len; i++) {
		printf("%d", arr[i]);
	}
}

void lecture19() {

	const int s_num = 10;
	int* s_numPtr = &s_num;
	ShowData(s_numPtr);

	int s_arr[4] = { 1, 2, 3, 4 };
	int* s_arrPtr = s_arr;

	ShowAllData(s_arrPtr, 3);


	int arr[3] = { 1, 2, 3 };
	int* arrPtr = arr;

	printf("�迭�� ũ�� : %d\n", sizeof(arr));
	printf("�������� ũ�� : %d\n", sizeof(arrPtr));


	// Constant(���)

	// ��� ������(pointer to constant)
	// num�� ���� �������� ���ϰ� ����
	const int num = 10;
	//num = 15;
	// ������ ������ ��������. ������ �����ڷε� ���� �ٲ��� ����
	const int* numPtr = &num;
	//*numPtr = 15;

	// ������ ���(constant pointer)
	int num1 = 20;
	int num2 = 30;
	int* const numCptr = &num1;
	*numCptr = 40;
	//numCptr = &num2;

	// ����� ����Ű�� �� ��ü�� ����� ������ constant pointer to constant
	const int num3 = 40;
	const int num4 = 50;
	const int* const numCptr2 = &num3;
	//*numCptr2 = 50;
	//numCptr2 = &num4;

	// const�� �����Ϳ� ����ϴ� ����
	// ������ ������ ����� ������� ������ �����Ϸ� �ܰ迡�� �����ϱ� ���ؼ�
}