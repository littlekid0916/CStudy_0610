/*
	�ۼ��� : �����
	�ۼ��� : 2024-07-11
	�н����� : ������
*/

/*
	������(pointer)
	�޸��� �ּҰ��� �����ϴ� ����

	��)
	Ÿ��* �������̸� = &�����̸�;
	�Ǵ�
	Ÿ��* �������̸� = �ּҰ�;


	������ ������

	�ּ� ������(&)
	������ �̸� �տ� ����Ͽ� �ش� ������ �ּҰ��� ��ȯ
	'&'��ȣ�� ���ۻ���(ampersand)��� ������ ���� �����ڶ�� �θ���

	���� ������(*)
	�������� �̸��̳� �ּ� �տ� ����Ͽ� �����Ϳ� ����Ű�� �ּҿ� ����� ���� ��ȯ
*/

#include "lectures.h"

void lecture17() {

	printf("����2 ���� ����!\n");

	int num;
	int num2;

	scanf_s("%d", &num);
	printf("num�� �� ��� : %d\n", num);
	
	// ������ * ��ġ�� �������.
	int* numPtr = &num;	// �����ͺ��� ����� �ʱ�ȭ
	int * numPtr2 = &num;
	int *numPtr3 = &num;

	// �����͸� ����ϸ� 16���� �ּҰ� ��µ�
	printf("%p\n", &numPtr);
	printf("%p\n", &numPtr2);
	printf("%p\n", &numPtr3);

	// �ּҿ� ����� ���� ������ ���� ������(dereference) ������
	// ����� ������ ���� �տ� * ����
	printf("%d\n", *numPtr);
	printf("%d\n", *numPtr2);
	printf("%d\n", *numPtr3);

	// ����1
	// ������ ���� number�� 20�� �Ҵ�
	// ������ ������ ���� numberPtr ������ number�� �ִ� �ּҸ� �Ҵ�
	// printf�� ����ؼ� numberPtr�� �ִ� ���� ���
	printf("����1\n");
	int number = 20;
	int* numberPtr = &number;
	printf("numberPtr�� ��(�ּ�) : %p\n", numberPtr);
	printf("numberPtr�� ����Ű�� �� : %d\n", *numberPtr);

	// ������ ������ �̿��Ͽ� ���� ����
	printf("���� number�� �� : %d\n", number);
	*numberPtr = 30;
	printf("����� number�� �� : %d\n", number);


	int a_num = 10;
	int* a_numPtr = &a_num;
	int* b_numPtr = a_numPtr;

	(*a_numPtr)++;	// *a_numPtr = 11
	(*b_numPtr)++;
	printf("%d\n", a_num);

	// ����2
	// e_num1, e_num2 ������ 10, 20 �Ҵ�
	// e_num1, e_num2�� ����Ű�� ������ e_num1Ptr, e_num2Ptr�� ���� �� ����
	// int* temp �����͸� ����
	// temp�� e_num1Ptr ���� , e_num2�� -> e_num1 , e_num2 temp�� �޾ƿ���
	printf("����2\n");
	int e_num1 = 10, e_num2 = 20;
	int* e_num1Ptr = &e_num1;
	int* e_num2Ptr = &e_num2;
	int* temp;
	printf("������ : %d %d\n", *e_num1Ptr, *e_num2Ptr);
	temp = e_num1Ptr;
	e_num1Ptr = e_num2Ptr;
	e_num2Ptr = temp;
	printf("���氪 : %d %d\n", *e_num1Ptr, *e_num2Ptr);

}