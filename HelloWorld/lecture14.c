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
	printf("a�� �� : %d\n", a);
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
	if (a > b) {
		return a;
	}
	else if (a < b) {
		return b;
	}
}

// �� �ϳ��� �޾Ƽ� �� ���� ���밪�� �����ϴ� �Լ� �����
int absoluteNum(int num) {
	if (num < 0) {
		// ����
		return num * (-1);
	}
	else {
		// ���
		return num;
	}
}

// ���밪���� ������ �� ���� ���ϴ� �Լ� �����

#include "lectures.h"

void lecture14() {

	// �Լ� ȣ�� ���
	// �Լ��̸�();
	int a = 5 + 7;
	printf("a�� �� : %d\n", a);
	a = addTwoNumber(5, 7);
	printf("a�� �� : %d\n", a);

	showResult();

	changeResult(addTwoNumber(5, 7));

	int c = inputNumber();
	printf("%d ���� ��µǾ����ϴ�.\n", c);

	int firstNum, secondNum;
	firstNum = inputNumber();
	secondNum = inputNumber();

	int compareAbsValue = compare(absoluteNum(firstNum), absoluteNum(secondNum));
	printf("�� ���� ���밪���� ��ȯ�� �� �� ū �� : %d", compareAbsValue);

}