/*
	�ۼ��� : �����
	�ۼ��� : 2024-06-13
	�н����� : �̽������� ���� ���, �Է��Լ�
*/

#include "lectures.h"

void lecture4() {

	/*int num = 500;
	printf("���� ������ �ݾ� : 500��\n");
	printf("\"���� ������ �ݾ� : %d��\"\n", num);*/

	/*
		������ �̸��� ������ ���� �ݵ�� ���Ѿ� �ϴ� ��Ģ
		- ������ �̸��� ������(��ҹ���), ����, ������ھ�(_)�θ� ����
		- ������ �̸��� ���ڷ� ���۵� �� ����
		- ������ �̸� ���̿��� ������ ������ �� ����
		- ������ �̸����� C���� �̸� ���ǵ� Ű����(keyword)�� ����� �� ����

		\n : �� ���� ����ش�. ����. new line
		\a : alarm. ������ ������� ���
		\t : tab ���� ���ڻ����� ������ ����(tab)
		\b : backSpace. �ܼ� Ŀ���� �� ĭ �ڷ� �̵�
		\r : ĳ���� ����(return). ���콺 Ŀ���� �ش� ���� �� ó������ �̵�
		\\, \?, \", \' : �ý��� ��� �� �⺻�� ����� �� ���� ���ڸ� ����ϰ� ����
	*/

	int num;
	printf("\"���� ������ �ݾ� : %d��\"\n", num);
	printf("\a");
	printf("Hello\b\bhi\n");
	printf("�ǰ��ϼ���\r�ȳ�\n");
	printf("�ݰ�\t���ϴ�\n");
	printf("\\ \' \" \? ������ �߻� �ϳ���?\n");

	// ������ ���ÿ� ����� �Բ� �Ҵ�
	int num6, num7, num8 = 10;

	/*
		�Է�(scanf) : ����ڷκ��� �پ��� �����͸� �پ��� ���Ŀ� ���� �Է¹��� �� �ְ� ���ش�
		�Է� ��� : scanf("%d", &���� �̸�);
		scanf_s("%d", &num);
	*/
	
	printf("���ڸ� �Է����ּ���.\n");
	scanf_s("%d", &num);
	printf("num�� �� ���� : %d", num);

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
	printf("%d X %d + %d�� �� : %d\n", secondNum1, secondNum2, secondNum3, secondNum1 * secondNum2 + secondNum3);

	// ����3. 2���� ������ �Է� �޾Ƽ� ��� �������� ���
	printf("����3\n");
	int a, b;
	printf("ù��° ������ �Է����ּ��� : ");
	scanf_s("%d", &a);
	printf("�ι�° ������ �Է����ּ��� : ");
	scanf_s("%d", &b);
	printf("�� : %d\n", a / b);
	printf("������ : %d\n", a % b);

	// ����4. �ϳ��� ������ �Է� �޾Ƽ� ������ ���
	printf("����4\n");
	int c;
	printf("������ ������ �Է����ּ��� : ");
	scanf_s("%d", &c);
	printf("%d\n", c * c);

	// ����5. �� ���� ������ �Է� �޾Ƽ� {fifthNum1 - fifthNum2} X {fifthNum2 + fifthNum3} X {fifthNum3 * fifthNum1}�� ����� ���
	printf("����5\n");
	int fifthNum1, fifthNum2, fifthNum3;
	printf("ù��° ������ �Է����ּ��� : ");
	scanf_s("%d", &fifthNum1);
	printf("�ι�° ������ �Է����ּ��� : ");
	scanf_s("%d", &fifthNum2);
	printf("����° ������ �Է����ּ��� : ");
	scanf_s("%d", &fifthNum3);
	printf("��� : %d", (fifthNum1 - fifthNum2) * (fifthNum2 + fifthNum3) * (fifthNum3 * fifthNum1));

};