/*
	�ۼ��� : �����
	�ۼ��� : 2024-06-28
	�н����� : ���������� ��������
*/

/*
	���� ����(local variable)
	'���' ������ ����� ������ �ǹ�
	������ ����� ��� �������� ��ȿ�ϸ� ����� ����Ǹ� �޸𸮿��� �������
	�޸𸮻��� ����(stack) ������ ����Ǹ�, �ʱ�ȭ���� ������ �ǹ� ���� ��(�����Ⱚ)���� �ʱ�ȭ

	���� ����(global variable)
	�Լ��� �ܺο��� ����� ������ �ǹ�
	���α׷��� ��𿡼��� ������ �� ������ ���α׷��� ����Ǿ�߸� �޸𸮿��� �������
	�޸𸮻��� ������(data) ������ ����Ǹ�, ���� �ʱ�ȭ���� �ʾƵ� 0���� �ڵ� �ʱ�ȭ

	������ ����Ⱓ
	�߰�ȣ�� ���� �� ������ ���� �������

	������ ���� ����

	���� ���� ������ ���� �̸��� ������ ������ �� ����
	���������� ����� �����ؾ� �Ѵ�

	1. return���� �� �Ѱ��ֱ�
*/

#include "lectures.h"

int count;

int simpleFunc() {

	count++;
	int num = 10;
	num++;
	printf("num�� �� : %d\n", num);

	return num;
}

void plusOne(int a, int b) {
	
	a++;
	b++;
}

void lecture15() {

	int num = 17;

	printf("���� ������ �ʱ�ȭ�� �ϱ� �� count�� �� : %d\n", count);
	count = 10;
	printf("count�� �� : %d\n", count);

	simpleFunc();
	printf("num�� �� : %d\n", num);
	printf("count�� �� : %d\n", count);

	int count1 = 4, count2 = 6;
	plusOne(count1, count2);
	printf("count�� �� : %d\n", count);

	static int stadic_num;
	printf("stadic_num�� �� : %d\n", stadic_num);
	
	printf("count1�� �� : %d, count2�� �� : %d\n", count1, count2);

}