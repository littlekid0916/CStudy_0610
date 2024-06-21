/*
	�ۼ��� : �����
	�ۼ��� : 2024-06-20
	�н����� : c��� �⺻ �ڷ���, ���
*/

/*
	�ڷ��� : ����Ǵ� �������� ������ ���� ���·� ����Ǵ� ���� ������ ������ ���� �ٸ��� ǥ��

	������
	char : 1����Ʈ(8��Ʈ) -128 ~ 127
	short : 2����Ʈ(16��Ʈ) -32,768 ~ 32,767
	int	: 4����Ʈ(32��Ʈ) -2,147,483,648 ~ 2,147,483,647
	long : 4����Ʈ(32��Ʈ) -2,147,483,648 ~ 2,147,483,647
	long long : 8����Ʈ(64��Ʈ) -9,223,372,036,854,775,808 ~ 9,223,372,036,854,775,807

	�Ǽ���
	float : 4����Ʈ(32��Ʈ) ��3.4x10^-37 ~ ��3.4x10^+38(�Ҽ��� 6�ڸ����� ǥ��)
	double : 8����Ʈ	(64��Ʈ) ��1.7x10^-307 ~ ��1.7x10^+308(�Ҽ��� 15�ڸ����� ǥ��)
	long double : 8����Ʈ �̻� double �̻��� ǥ������(�Ҽ��� 18�ڸ����� ǥ��)
*/

/*
	sizeof : �޸� ������ �Ҹ��ϴ� ũ�⸦ byte ������ �ٲ㼭 ���

	unsigned : ������� �����Ͽ� �� �� ���� ������ ���� ���� 
*/

/*
	���(Constant) : ���� �����Ǿ� ������ �� ���� �޸� ����
	����� ���� : �̸��� ���� �ʴ� ���ͷ� ��� (Literal), �̸��� ���� �ɺ��� ���(symbolic)
	���ͷ� ������� ������ �⺻ �ڷ����� int�̰� int���� ū ���� �ԷµǸ� �ڵ����� int ���� ū ������ ���� ����
	�Ǽ��� double

	���ͷ� ���
	long -> ��L
	unsigned -> UL
	long long -> LL
	usgined long long -> ULL
	float -> F

	�ɺ��� ���
	const ���
	����� ���ÿ� �ʱ�ȭ�� �ؾ���, �������� �빮�ڷ� �ۼ�
	��) const �ڷ��� ������ = ��;

	��ó����(#define) ���
	�빮�ڷ� �ۼ�
*/

#include "lectures.h"

void lecture9() {
	
	// sizeof �����ڸ� ����ؼ� �������� ���
	int sizeNum = sizeof(char);
	printf("char ������ ũ�� : %d\n", sizeNum);
	sizeNum = sizeof(short);
	printf("short ������ ũ�� : %d\n", sizeNum);
	sizeNum = sizeof(int);
	printf("int ������ ũ�� : %d\n", sizeNum);
	sizeNum = sizeof(long);
	printf("long ������ ũ�� : %d\n", sizeNum);
	sizeNum = sizeof(long long);
	printf("long long ������ ũ�� : %d\n", sizeNum);
	sizeNum = sizeof(float);
	printf("float ������ ũ�� : %d\n", sizeNum);
	sizeNum = sizeof(double);
	printf("double ������ ũ�� : %d\n", sizeNum);
	sizeNum = sizeof(long double);
	printf("long double ������ ũ�� : %d\n", sizeNum);

	// ���ͷ� ����� sizeof �����ڷ� ���
	sizeNum = sizeof(10);
	printf("������ ���ͷ� ��� ũ�� : %d\n", sizeNum);
	sizeNum = sizeof(3.14);
	printf("�Ǽ��� ���ͷ� ��� ũ�� : %d\n", sizeNum);
	sizeNum = sizeof('A');
	printf("������ ���ͷ� ��� ũ�� : %d\n", sizeNum);

	// ���簢���� ���̸� ���ϴ� ���α׷��� �ۼ�
	int xpos1, ypos1, xpos2, ypos2;
	printf("ù��° ��ǥ : \n");
	scanf_s("%d %d", &xpos1, &ypos1);
	printf("�ι�° ��ǥ : \n*�ι�° ��ǥ�� ù��° ��ǥ���� Ŀ����\n");
	scanf_s("%d %d", &xpos2, &ypos2);
	int result = (xpos2 - xpos1) * (ypos2 - ypos1);
	printf("���簢���� ���� : %d", result);

}