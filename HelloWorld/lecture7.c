/*
	�ۼ��� : �����
	�ۼ��� : 2024-06-18
	�н����� : ��ǻ�Ͱ� �����͸� ǥ���ϴ� ���
*/
	
/*
	���� : ��ǥ�����, n������ n���� ��ȣ�� ���� ǥ��
	2����(0, 1), 10����(0 ~ 9), 16����(0 ~ 15)

	�ƽ�Ű�ڵ�(ASCII) : �̱� ����ǥ�� ��ȸ���� ǥ��ȭ�� ���� ��ȯ�� 7��Ʈ ��ȣü��
*/

#include "lectures.h";

void lecture7() {

	// ���ڸ� ǥ���ϴ� ���
	char firstCharacter = 'a';
	printf("������� %c\n", firstCharacter);

	// ���ڸ� �ϳ� ������ ������ ���
	char y = 65;
	printf("char ������ ���Ŀ� ������ ������ ������ ���ñ��? %c\n", y);

	// ������ ����
	int sInt = 'A';
	printf("int ������ ���Ŀ� ���ڸ� ������ ������ ���ñ��? %d\n", y);

	// ������ ��� ����1
	int fInt = 128;
	char fChar = fInt;
	printf("%d\n", fChar);
	// ���� �ϴ� �� : 128
	// ���� ��� �� : -128

	// ���� ������ ǥ���ϴ� ���
	// 1����Ʈ(8��Ʈ) �������� ��ȣ�� �ִ� ������ ǥ���ϴ� ���
	// MSN : 0�̸� ��� 1�̸� ����

	// ���� ������ ǥ���ϴ� ���
	// MSN 1�� ���� ������ ������ ������ ���ڷ� ǥ���ϸ� �װ��� ������ �ȴ�.
	// 2�� ���� ������� ���� �� �ִ�.
	// 2�� ���� ����̶� ��� ��Ʈ ������ 0�� 1�� �ڹٲپ� �� �� 1�� �����ش�.

	// ���� �÷ο� : ���ѵ� �޸𸮸� �ʰ��ؼ� ǥ���� �� �ִ� ������ �Ѿ�� ������ ����� ������ ����
	
	// �����÷ο� ����
	char o_a, o_b, o_c;
	o_a = 100;
	o_b = 300;	// 128���� ���� ǥ�� �ʰ��ϸ� -128 �������.
	o_c = o_a + o_b;	// 100 + 44 = 144 ( -127, -126, -125 ... -133)
	printf("�����÷ο� ��� Ȯ�� : %d\n", o_c);

	// ����1. ASCII ���ڸ� �̿��ؼ� 'a'�� 'Z'�� ���
	printf("����1\n");
	char char_a = 97;
	char char_Z = 90;
	printf("%c %c\n", char_a, char_Z);

	// ����2. -255�� ��Ʈ�� ǥ��
	
	// ����3. src ������ ���ڸ� �Է� �ް� �Է� ���� ���ڸ� �ƽ�Ű���ڷ� ���
	printf("����3\n");
	int src;
	scanf_s("%d", &src);
	printf("%c", src);

}