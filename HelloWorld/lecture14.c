/*
	�ۼ��� : �����
	�ۼ��� : 2024-06-27
	�н����� : �Լ�
*/

/*
	�Լ��� ���� ����
	c���� �������� ���α׷��� ���

	1. main �Լ��� ���۵Ǵ� ���α׷��ֿ� �ڵ� ������ ��������� �ڵ带 �ľ��ϱ� �����
	��� ���� ������ ��������� �ݺ����� �ڵ尡 ��� �߻�

	�Լ��� ����ؼ� �ڵ带 �ľ��ϱ� ���� �����
	���� ������ ���� �����
	�ݺ����� �ڵ带 ���δ�
*/

/*
	�Լ��� ����
	return : �Լ��� ��ǥ�� ���� ��ġ�� ��ȯ
*/

//	1. ��ȯ���� �ְ� �Ű������� �ִ� �Լ�
int addTwoNumber(int a, int b) {
	int result = a + b;
	printf("result�� �� : %d\n", result);
	return result;
}

//	2. ��ȯ���� �ְ� �Ű������� ���� �Լ�
int inputNumber() {
	int number;
	scanf_s("%d", &number);
	return number;
}

//	3. ��ȯ���� ���� �Ű������� �ִ� �Լ�
void changeResult(int result) {
	printf("%d���� ����� ���� �Ǿ����ϴ�\n", result);
}

//	4. ��ȯ���� ���� �Ű������� ���� �Լ�
void showResult(void) {
	printf("����� ��� �ϰڽ��ϴ�\n");
	printf("������ ���� �Ǿ����ϴ�\n");
}

// �� ���� ���ؼ� ū ���� �����ϴ� �Լ� �����
int compare(int a, int b) {
	printf("����1\n");
	if (a > b) {
		return a;
	}
	else if (a < b) {
		return b;
	}
}

// �� �ϳ��� �޾Ƽ� �� ���� ���밪�� �����ϴ� �Լ� �����
int compare1(int a) {
	printf("����2\n");
	if (a > 0) {
		return a;
	}
	else if (a < 0) {
		return a * (-1);
	}
}

// ���밪���� ������ �� ���� ���ϴ� �Լ� �����

#include "lectures.h"

void lecture14() {

	// �Լ� ȣ�� ���
	// �Լ��̸�();
	int a;
	a = addTwoNumber(1, 2);
	printf("a�� �� : %d\n", a);

	addTwoNumber(3, 4);

	changeResult(a);

	showResult();

	int c = inputNumber();
	printf("%d�� ���� ��µǾ����ϴ�\n", c);

	int d = compare(3, 9);
	printf("%d\n", d);
	int e = compare1(8);
	printf("%d\n", e);

}