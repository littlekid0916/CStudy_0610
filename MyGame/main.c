#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

	// �÷��̾ ȯ���ϴ� �ؽ�Ʈ ���
	printf("�� �ȳ��ϼ��� ȯ���մϴ� ��\n");
	printf("���ڸ� �Է��ϸ� ������ �ٷ� ���۵˴ϴ�.\n");

	srand(time(NULL));

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



	//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

	srand(time(NULL));

	int computerValue = rand() % 100 + 1;
	int userValue;
	int playerHP = 5;

	printf("�ڡ� ȯ���մϴ�. �١�\n");
	printf("���ڸ� �Է��ϸ� ������ �����մϴ�.\n");
	printf("���� ����!\n");
	printf("�÷��̾��� ���� �Է����ּ���.\n");
	scanf_s("%d", &userValue);
	printf("��ǻ���� ���� %d �Դϴ�.\n", computerValue);
	printf("�÷��̾��� ���� %d �Դϴ�.\n", userValue);

	while (1) {
		if (computerValue == userValue) {
			// �Լ�ȭ_1 : GameWin() ���ӿ��� �¸��� �����ϴ� �Լ��� ��������.
			gameWin();
			break;
		}
		else {
			// ���� �÷��̾��� ���� ü���� 0���� �۰ų� ������ ������ ������Ѷ�.
			if (playerHP <= 0) {
				printf("���� ����\n");
				break;
			}

			// �Լ�ȭ_2 : �÷��̾��� ü���� ���� ��Ű�� ���ڸ� �ٽ� ���� ��ȸ�� �ִ� �ڵ带 �Լ�ȭ ���� ���̴ϴ�.

			// �÷��̾��� ü���� ���ҽ�Ų��.
			playerHP--;
			// �ٽ� �÷��̾ ���ڸ� ���� ��ȸ�� �ش�.
			printf("�÷��̾��� ���� �Է����ּ���.\n");
			scanf_s("%d", &userValue);
		}
	}


	return 0;
}