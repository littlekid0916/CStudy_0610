/*
	�ۼ��� : �����
	�ۼ��� : 2024-06-17
	�н����� : �����
*/

/*	�����: ���α׷����� �ϸ鼭 �ۼ��� ������ ������ �ذ��ϱ� ���� ������ �ǽɰ��� �κп�
	�ڵ��� �ߴ����� �����ϰ� ������ ��ǻ���� ������� ������ Ȯ���� �� �ִ�.

	������(Operator)
	���� ������(assignment operator)
	= : ������ ���� ���� ������ �־��ش�
	���� ���� ������
	+=, -=, *=, /=, %=, <=, >=, &=, ^=, |=

	���� ������(increment and decrement operator)
	++num : ���� �ǿ������� ���� 1 ������Ų �Ŀ� �ش� ������ ������.
	num++ : ���� �ش� ������ �����ϰ� ����, �ǿ������� ���� 1 ������Ŵ.

	���� ������

	�� ������(comparison operator) : �ǿ����� ������ ������� ũ�⸦ �Ǵ�
	��� ���� true(1), false(0)���� ���´�.
	==, !=, >, >=, <, <=

	�� ������(logical operator)
	&&(AND) : ������ ��� ���̸� 1�� ��ȯ
	||(OR) : ���� �߿��� �ϳ��� ���̸� 1�� ��ȯ
	!(NOT) : ������ ����� ���̸� 0��, �����̸� 1�� ��ȯ

	���� ���� ����
	int a = (a == 10 && b == 12);
	int b = (a < 12 || b > 12);
	int c = !a
*/

#include "lectures.h";

void lecture6() {

	printf("����� ���� ����\n");
	char a, b, c;
	a = 100;
	b = 300;
	c = a + b;
	printf("%d + %d = %d\n", a, b, c);

	printf("������ ���� ����\n");
	int num1, num2, num3, result;
	scanf_s("%d %d %d", &num1, &num2, &num3);
	printf("��� ���(L-Value) = %d X %d + %d = %d\n", num1, num2, num3, num1 * num2 + num3);
	scanf_s("%d", &result);
	printf("���մ��Կ����� ��� : %d += %d = %d\n", result, num1, result + num1);

	printf("����, ���� ������ ���� ����\n");
	int plusA = 10;
	int plusB = (plusA++) + 2;
	printf("plusB�� ���� : %d\n", plusB);

	printf("��� : %d\n", num1 < num3);

	printf("������ �켱 ���� ���� ����\n");
	int variableA = 3 + 4 * 5;
	int	variableB = 7 / 3 % 2; 
	int final = variableA > variableB;
	printf("��� : %d", final);
}
