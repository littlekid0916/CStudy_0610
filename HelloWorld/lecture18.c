/*
	�ۼ��� : �����
	�ۼ��� : 2024-07-12
	�н����� : ������ ����
*/

/*
	������ ������ ��Ģ
	1. �����ͳ����� ����, ����, �������� �ƹ��� �ǹ̰� ����
	2. �����ͳ����� ������ �� ������ ������ ����� �Ÿ��� ��Ÿ����
	3. �����Ϳ� ������ ���ϰų� �� ���� ������, �Ǽ����� ������ ������� �ʴ´�
	4. �����ͳ��� �����ϰų� ���� �� �ִ�
*/

#include "lectures.h"

void lecture18() {

	int num = 10;
	int* numPtr = &num;
	(*numPtr)++;
	printf("num�� �� : %d\n", *numPtr);

	// 16������ ������ ������ ���� �־ �ּ��� ���� ����
	int* numPtrA = 0x100000;
	int* numPtrB = 0x100000;

	numPtrA = numPtrA + 1;	// numptrA++;
	numPtrB = numPtrB + 2;	// numPtrB+=2;

	printf("PtrA�� �� : %p\n", numPtrA);
	printf("PtrB�� �� : %p\n", numPtrB);

	// �ּ��� ũ�� ���ϱ�
	printf("������ ������ ũ�� : %d\n", sizeof(numPtrA));	// x86 : 4
	printf("������ ������ ũ�� : %d\n", sizeof(numPtrA));	// x64 : 8

	// ������ ������ ũ�Ⱑ �ٸ� ����

	// �����Ϳ� �迭
	int numArr[5] = { 11, 22, 33, 44, 55 };
	int index = 0;
	printf("numArr 3��° ��� : %d\n", numArr[index + 2]);

	// index�� ���� ���ϱ� �Ǵ� ���� �����ڸ� ����ؼ� numArr�� �ݺ������� ���
	printf("numArr ������ ���\n");
	for (int i = 0; i < 5; i++) {
		printf("%d\n", numArr[i]);
	}
	printf("numArr ������ ���\n");
	for (int i = 4; i >= 0; i--) {
		printf("%d\n", numArr[i]);
	}


	int arr1[3] = { 0 , 1 , 2 };
	printf("�迭�� �̸� : %p\n", arr1);

	for (int i = 0; i < 3; i++) {
		printf("�迭�� ��� %d ��� : %p\n", i, &arr1[i]);
	}


	char* charPtr = 0x1000000;
	charPtr++;
	printf("%p\n", charPtr);	// 0x1000001
	short* shortPtr = 0x1000000;
	shortPtr++;
	printf("%p\n", shortPtr);	// 0x1000002

	// sizeof(��������) : �������� ũ��
	// sizeof(��������) x n(���� ��) ũ�Ⱑ �����Ѵ�.
	charPtr += 10; // 0x1000000 + 10(1x10);
	shortPtr += 10; // 0x1000000 + 20(2x10);

	int arr2[3] = { 0 , 1 , 2 };
	int* s_ptr = arr2;
	int* s_ptr2 = &arr2[0];

	&arr2[0];	// 1��° �ּ�
	&arr2[1];	// 2��° �ּ�
	&arr2[2];	// 3��° �ּ�

	printf("�ּ��� ���� �� ������ : %d\n", *(s_ptr + 1));
	printf("������ �� �� ���� : %d\n", (*s_ptr2) + 1);

	// ����1
	// ���̰� 5�� �迭 ���� firstArr {1,2,3,4,5}
	// �迭�� ������ ����(firstArrPtr)�� ����
	// �ݺ����� ������ �̿��ؼ� �ּ��� ���� 3�� ����

	int firstArr[5] = { 1, 2, 3, 4, 5 };
	int* firstArrPtr = firstArr;
	for (int i = 0; i < 5; i++) {
		*firstArrPtr += 3;
		firstArrPtr++;
	}
	for (int i = 0; i < 5; i++) {
		printf("�迭�� ��ҿ� 3�� ������Ų �� : %d\n", firstArr[i]);
	}


	int exArr[5] = { 0 };
	int* arrPtr2 = exArr;
	printf("�迭�� ũ�� : %d\n", sizeof(exArr));
	printf("�������� ũ�� : %d\n", sizeof(arrPtr2));

	// ����2
	// �������� ���
	int secondArr[5] = { 1, 2, 3, 4, 5 };
	int* secondArrPtr = secondArr;
	secondArrPtr += 4;
	for (int i = 0; i < 5; i++) {
		printf("%d\n", *secondArrPtr);
		secondArrPtr--;
	}


	int o_Arr[3] = { 1, 2, 3 };
	int* o_ArrPtr = o_Arr;
	for (int i = 0; i < 3; i++) {
		printf("*(Ptr + i) : %d		", *(o_ArrPtr + i));
		printf("*(Arr + i) : %d		", *(o_Arr + i));
		printf("Arr[i] : %d		", o_Arr[i]);
		printf("Ptr[i] : %d\n", o_ArrPtr[i]);
	}


	int* ob_numptrA = 0x100000;	   // int num = 0;  

	// printf("%p", ob_numptrA);
	// printf("%d", *ob_numptrA);
	// ������ ���� �ּ� �������ִ� ���� ������ �߻��� ���ɼ��� �ſ� ����

	ob_numptrA = 0;
	ob_numptrA = NULL;

	/*
		�� ������(null pointer)
		0�̳� NULL�� �����Ͽ� �ʱ�ȭ�� ������
		�ƹ��͵� ����Ű�� �ʴ� �����Ͷ�� �ǹ�
	*/

	// ����3
	// ���̰� 6�� �迭�� ���� �� �������� ���
	int t_arr[6] = { 1, 2, 3, 4, 5, 6 };
	int* frontPtr = (t_arr + 0);
	int* backPtr = (t_arr + 5);
	int temp;

	printf("���� ��\n");
	for (int i = 0; i < 6; i++) {
		printf("%d", t_arr[i]);
	}
	printf("\n");
	for (int i = 0; i < 3; i++) {
		temp = *frontPtr;
		*frontPtr = *backPtr;
		*backPtr = temp;
		frontPtr++;
		backPtr--;
	}
	printf("���� ��\n");
	for (int i = 0; i < 6; i++) {
		printf("%d", t_arr[i]);
	}

}