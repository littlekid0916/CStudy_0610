#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "countNumFunc.h"

int main(void) {

	//setColor(0, 1);	// 0 ~ 15
	//srand(time(NULL));

	//// �÷��̾ ȯ���ϴ� �ؽ�Ʈ ���
	//startGameSetting();
	 
	//system("cls");
	
	//int computerVale;
	//int userValue;

	//for (int i = 4; i >= 0; i--) {

	//	computerVale = rand() % 5 + 1;
	//	scanf_s("%d", &userValue);
	//	printf("��ǻ�� : %d �� : %d\n", computerVale, userValue);

	//	if (userValue == computerVale) {
	//		gameWin();
	//		break;
	//	}
	//	else if (userValue != computerVale) {
	//		if (userValue > computerVale && i >= 1) {
	//			printf("��ǻ�� ���� Ů�ϴ�. �ٽ� �õ��غ�����. ���� ��ȸ : %d\n", i);
	//		}
	//		else if (userValue < computerVale && i >= 1) {
	//			printf("��ǻ�� ���� �۽��ϴ�. �ٽ� �õ��غ�����. ���� ��ȸ : %d\n", i);
	//		}
	//		else if (i == 0) {
	//			printf("���� ��ȸ�� ���� �����߽��ϴ�.\n");
	//		}
	//	}
	//}



	// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

	setColor(0, 1);	// 0 ~ 15
	srand(time(NULL));

	int computerValue = rand() % 5 + 1;
	int userValue;
	int playerHP = setPlayerHP();
	
	startGameSetting();
	printf("���� ����!\n");
	printf("�÷��̾��� ���� �Է����ּ���.\n");
	userValue = inputNumber();
	printf("��ǻ���� ���� %d �Դϴ�.\n", computerValue);
	printf("�÷��̾��� ���� %d �Դϴ�.\n", userValue);

	system("cls");	// �Լ��� ������

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
			userValue = inputNumber();
		}
	}


	return 0;
}