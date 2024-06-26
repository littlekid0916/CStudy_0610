/*
	�ۼ��� : �����
	�ۼ��� : 2024-06-25
	�н����� : �ݺ����� ���ؿ� �ǽ�
*/

/*
	�ݺ���(iteration statements) : ���α׷� ������ �Ȱ��� ����� ���� Ƚ����ŭ �ݺ��Ͽ� �����ϵ��� �����ϴ� ��ɹ�

	for
	��ü������ �ʱ��, ���ǽ�, �������� ��� �����ϰ� �ִ� �ݺ���

	for�� ��)
	for(�ʱ��; ���ǽ�; ������) {
		���ǽ��� ����� ���� ���� �ݺ������� �����ϰ��� �ϴ� ��ɹ�;
	}


	while
	Ư�� ������ ������ ������ ����ؼ� �־��� ��ɹ��� �ݺ� ����

	while�� ��)
	while (���ǽ�) {
		���ǽ��� ����� ���� ���� �ݺ������� �����ϰ��� �ϴ� ��ɹ�;
	}


	do / while
	while ���� ������ �����ϱ� ���� ���� ���ǽĺ��� �˻�������
	do / while ���� ���� ������ �� �� ������ �Ŀ� ���ǽ��� �˻�

	do / while�� ��)
	do {
		���ǽ��� ����� ���� ���� �ݺ������� �����ϰ��� �ϴ� ��ɹ�;
	} while (���ǽ�);

*/

#include "lectures.h"

void lecture12() {

	for (int i = 0; i < 10; i++) {
		printf("i++ : %d\n", i);
	}

	int index;
	for (index = 10; index > 0; index--) {
		printf("index : %d\n", index);
	}

	for (int i_num = 0; i_num < 10; i_num += 2) {
		printf("i_num : %d\n", i_num);
	}

}

void lecture12_2() {

	printf("����1\n");
	// for���� �̿��Ͽ� �ݺ� Ƚ���� �Է� �޾Ƽ� ���
	int i_scanfNum;
	printf("�ݺ��� ���� Ƚ�� : \n");
	scanf_s("%d", &i_scanfNum);
	for (int i = 0; i < i_scanfNum; i++) {
		printf("i_scanfNum : %d\n", i_scanfNum);
	}

	printf("����2\n");
	// 1�̻� 100�̸��� ������ �߿��� 7�� ����� 9�� ����� ���
	// ����� ����� �� ���� ���
	for (int i = 1; i < 101; i++) {
		if (i % 7 == 0 || i % 9 == 0) {
		printf("%d\n", i);
		}
	}

	printf("����3\n");
	// while���� �̿��Ͽ� �ݺ� Ƚ���� �Է� �޾Ƽ� ���
	int w_num;
	printf("�ݺ��� ���� Ƚ�� : \n");
	scanf_s("%d", &w_num);
	while (w_num > 0) {
		printf("while : %d\n", w_num);
		w_num--;
	}

}

void lecture12_3() {

	int i = 0;
	while (i < 10) {
		printf("while : %d\n", i);
		i++;
	}
	
	int i_doNum = 1;
	do {
		printf("�� ���� �ݵ�� ���\n");
		i_doNum = i_doNum * 3;
	} while (i_doNum < 10);
}