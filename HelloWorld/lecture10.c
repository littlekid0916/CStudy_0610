/*
	�ۼ��� : �����
	�ۼ��� : 2024-06-21
	�н����� : �ڷ� �� ��ȯ
*/

/*
	�� ��ȯ ����
	�Ͻ��� ��ȯ : ������ ������ �ڵ����� ��ȯ
	����� ��ȯ : �����ڰ� ���� ��ȯ

	������ �°�

	������ ����ġ�� ���� �߻��ϴ� �ڵ� �� ��ȯ
	���� �ٸ� ���������� ������ �߻����� �� � �ڷ������� �츮�� �����͸� ���߾�� �ұ�
	�켱��
	int -> long -> long long -> float -> double -> long double

	������ �ڷ��� ����ġ

	����ȯ ������
*/

#include "lectures.h"

void lecture10() {

	int num = 3 + 4.75 + 5.25;
	printf("%d\n", num);

	double num1 = 245;
	int num2 = 3.1415;
	int num3 = 129;
	char ch = num3;

	printf("���� 245�� �Ǽ��� : %f\n", num1);
	printf("�Ǽ� 3.1415�� ������ : %d\n", num2);
	printf("ū ���� 129�� ���� ������ : %d\n", ch);

	// ������ �°�
	short a_num1 = 15, a_num2 = 25;
	short a_num3 = a_num1 + a_num2;

	int d_num1 = 3, d_num2 = 4;
	double divResult = d_num1 / d_num2;
	printf("���� ������ �� : 0.75000 ���� �� : %lf\n", divResult);
	divResult = (double)d_num1 / d_num2;
	printf("�� ��ȯ�� �� : %lf\n", divResult);
}