#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

	// printf �Լ��� scanf �Լ��� �̿��Ͽ� ���� �����

	// �÷��̾ ȯ���ϴ� �ؽ�Ʈ ���
	printf("�� �ȳ��ϼ��� ȯ���մϴ� ��\n");
	printf("���ڸ� �Է��ϸ� ������ ���۵˴ϴ�.\n");

	// ���� �Ǵ� �Ǽ� �����͸� ���� ��ǻ�Ͱ� �����ϴ� ����� ���� �����ϴ� ����� ���� ���
	srand(time(NULL));

	// int computerVale = rand() % 100 + 1;
	int computerVale = rand() % 5;
	int userValue;

	scanf_s("%d", &userValue);
	printf("��ǻ�� : %d �� : %d\n", computerVale, userValue);
	
	if(userValue == computerVale) {
		printf("�����մϴ�! ������ Ŭ�����߽��ϴ�!\n");
	}
	else if (userValue != computerVale) {
		printf("Ʋ�Ƚ��ϴ�. �ٽ� �õ��غ�����.\n");
		// int computerVale = rand() % 100 + 1;
		computerVale = rand() % 5;
		scanf_s("%d", &userValue);
		printf("��ǻ�� : %d �� : %d\n", computerVale, userValue);

		if (userValue == computerVale) {
			printf("�����մϴ�! ���� ������ Ŭ�����߽��ϴ�!\n");
		}
		else if (userValue != computerVale) {
			printf("�� Ʋ�Ƚ��ϴ�. NAGA\n");
		}
	}

	return 0;
}