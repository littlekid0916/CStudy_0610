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
	int computerVale;
	int userValue;

	for (int i = 4; i >= 0; i--) {

		computerVale = rand() % 5 + 1;
		scanf_s("%d", &userValue);
		printf("��ǻ�� : %d �� : %d\n", computerVale, userValue);

		if (userValue == computerVale) {
			printf("�����մϴ�! ������ Ŭ�����߽��ϴ�!\n");
			break;
		}
		else if (userValue != computerVale) {
			if (userValue > computerVale && i >= 1) {
				printf("��ǻ�� ���� Ů�ϴ�. �ٽ� �õ��غ�����. ���� ��ȸ : %d\n", i);
			}
			else if (userValue < computerVale && i >= 1) {
				printf("��ǻ�� ���� �۽��ϴ�. �ٽ� �õ��غ�����. ���� ��ȸ : %d\n", i);
			}
			else if (i == 0) {
				printf("���� ��ȸ�� ���� �����߽��ϴ�.\n");
			}
		}
	}

	return 0;
}