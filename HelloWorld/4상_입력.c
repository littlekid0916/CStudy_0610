// �Է�
// scanf �Լ��� �ǽ�
// ���� �̸� ���� (�Է��� �޾Ƽ� ������ ������ �̸� ����)
// �⺻ ���� : scanf("%d", &������ �̸�);
// scanf_s("%d", &num);

#include <stdio.h>

int main(void) {

	/*int num;
	printf("���ڸ� �Է����ּ���.\n");
	scanf_s("%d", &num);
	printf("num�� �� ���� : %d", num);*/

	// ����1. 2���� ������ �Է� �޾Ƽ� �� ���� ������ ������ ����� ���
	printf("����1\n");
	int firstNum1, firstNum2;
	printf("ù��° ������ �Է����ּ��� : ");
	scanf_s("%d", &firstNum1);
	printf("�ι�° ������ �Է����ּ��� : ");
	scanf_s("%d", &firstNum2);
	printf("���� : %d\n", firstNum1 - firstNum2);
	printf("���� : %d\n", firstNum1 * firstNum2);
	
	// ����2. 3���� ������ �Է� �޾Ƽ� secondNum1 * secondNum2 + secondNum3�� ���
	printf("����2\n");
	int secondNum1, secondNum2, secondNum3;
	printf("ù��° ������ �Է����ּ��� : ");
	scanf_s("%d", &secondNum1);
	printf("�ι�° ������ �Է����ּ��� : ");
	scanf_s("%d", &secondNum2);
	printf("����° ������ �Է����ּ��� : ");
	scanf_s("%d", &secondNum3);
	printf("%d * %d + %d�� �� : %d\n", secondNum1, secondNum2, secondNum3, secondNum1 * secondNum2 + secondNum3);

	// ����3. 2���� ������ �Է� �޾Ƽ� ��� �������� ���
	printf("����3\n");

	return 0;
}