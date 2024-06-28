/*
	�ۼ��� : �����
	�ۼ��� : 2024-06-26
	�н����� : break, continue
*/

/*
*   for �ݺ���, while �ݺ���
*   �ݺ����� ������ �����ϰ� ǥ��.
*   break, continue.. (�ݺ���, ���ǹ� - ���) �������ִ� ���
*   for, while, do while, switch ����� �մϴ�.
*/

/*
*  break   : �����帧���� ����� ���� ����մϴ�. break ����Ǹ� �ش� ������� ���� ���ɴϴ�.
* continue : �����帧�� ������ ���·� �ش� �ڵ��� ���ุ �ǳ� �ٴ� ����� �մϴ�.
*/

#include "lectures.h"

void lecture13()
{
	// printf 10�� �ݺ��ϴ� �ڵ带 for �ݺ���.
	// 0�� ���� ~ Ư�� ���ڱ��� �ݺ��ؼ� �Ʒ��� �ڵ带 �����ϴµ�,
	// ���� ���ϴ� ��ǥ���� �����ϸ�
	for (int i = 0; i < 10; i++)
	{
		printf("Hi %d\n", i);

		if (i == 7)
		{
			printf("i�� 7�� �� ��µ�\n");
			break;
		}

	}
	int index = 0;
	for (; ;)  // ���� �ݺ���. ctrl + c
	{
		index++;
		printf("hi %d\n", index);
		if (index == 7)
		{
			printf("7�� ��µǾ����ϴ�. \n");
			break;
		}
	}

	// 
	int targetNumber;  // �������� ����ϰ��� �ϴ� ��ǥ ����(scanf_s)
	//int counter = 0;   // �ݺ������� targetnumber�� ã�� ���� ����	  
	//scanf_s("%d", &targetNumber);
	//
	//for (; ;)
	//{
	//	counter++;
	//	if (targetNumber == counter)
	//	{
	//		printf("���ϴ� ��� ���� ��µǾ����ϴ�. %d\n", targetNumber);
	//		break;
	//	}
	//}

	// while �ݺ���
	scanf_s("%d", &targetNumber);
	int w_counter = 0;
	//while (1) // ���� �ݺ���
	//{
	//	w_counter++;
	//	if (targetNumber == w_counter)
	//	{
	//		printf("���ϴ� ��� ���� ��µǾ����ϴ�. %d\n", targetNumber);
	//		break;
	//	}
	//	// for �ݺ������� Ÿ�ٳѹ��� ã�� �ڵ�� ���� ������ �����غ�����.
	//	// break�� ����� �ϼž� �մϴ�.
	//}

	// continue ��� ����
	int w_num = 0;
	while (w_num < 10)
	{
		w_num++;
		if (w_num % 2 == 0)
		{
			continue;
		}
		printf("%d \n", w_num);
	}

	// �ֻ����� �����ſ���. �ֻ������� 12���� ���� �ֽ��ϴ�. Scanf_s �������� �ֻ����� ���� �����ϼ���. (�Ϸ�)
	// ���࿡ �ֻ����� ¦���� ���´ٸ�, ���� �������� ���� �ִ� ���� �������� 2�谡 �ǰ�,	  (�б� ���� �Ϸ�)
	// ���࿡ Ȧ���� ���´ٸ�, �������� ���� �ִ� �������� 0���� �Ǵ� �ڵ带 �ۼ��غ�����.  ( ������ �ڵ� ����)
	// ���࿡ �������� 0���� �ȴٸ� ���α׷��� �������ִ� ���α׷��� ����� ����.

	printf("�ֻ��� ���� ���� \n");

	// 0 ~ 12���ڸ� scanf_s ���
	printf("�������� ���� Ÿ¥���� �ֻ����� ���ڸ� ����ּ���(0 ~ 12) : ");
	int diceNum, gameMoney;
	// ���� �ڵ��� ������ 12 ���� ū����, 0���� ���� ���ڸ� �Է��ϸ� �� ���ڰ� diceNum�� ����� �˴ϴ�. �̰��� �����ϴ� �ڵ�
	scanf_s("%d", &diceNum);
	gameMoney = 1000;  // �⺻ ������ 1000��

	while (1) // while Ż�� ������ 
	{
		if (diceNum < 1 || diceNum > 12)
		{
			printf("�߸��� �ֻ����� ũ�⸦ �Է��߽��ϴ�. \n �ֻ��� ũ�⸦ �ٽ� �Է����ּ��� : \n");
			scanf_s("%d", &diceNum);
		}
		else
		{
			// ¦������ Ȧ������ �Ǻ��ϴ� �ڵ带 �ۼ��ؾ� �Ѵ�. 1 ~ 12
			if (diceNum % 2 == 0)  // ¦��
			{
				gameMoney = gameMoney * 2;

				if (gameMoney > 5000) // ���� �¸� ���� 
				{
					printf("���ӿ��� �¸��߽��ϴ�. ���� �ݾ��� : %d �Դϴ�.\n", gameMoney);
					break;
				}
				else
				{
					printf("���� ���� ���� �ݾ� : %d \n", gameMoney);
					scanf_s("%d", &diceNum);
				}
			}
			else // Ȧ��
			{
				gameMoney = 0;
				printf("����� ���ӿ��� �����ϴ�. ���� �ݾ��� : %d \n", gameMoney);
				break;
			}
		}
	}


}



/*
*  if ~ else if ~ else �ڵ带 �����ϴ� ����� ������ϴ�.
*
*  �Ǵٸ� ���ǹ� Switch -  break;
*
*  Switch( ���� )
*  {
*	   case ������ �� :
*	   ����Ǵ� �ڵ�
	   break;
	   ...
	   ...
	   ...
	   default :
	   break;
*  }
*
*  ������ ������, ó���ؾ��� ������ �پ��� �� ����ϴ� ���ǹ� �Դϴ�.
*/

void lecture13_2()
{
	int num;
	scanf_s("%d", &num);

	// �Ʒ� switch���� if ~ else if ~ else�� �ٲپ� ������
	switch (num)
	{
	case 0:
		printf("num�� 0�Դϴ�.\n");
		break;
	case 1:
		printf("num�� 1�Դϴ�.\n");
		break;
	case 2:
		printf("num�� 2�Դϴ�.\n");
		break;
	default:
		printf("num�� 0 ~ 2 �̿��� ���Դϴ�.\n");
		break;
	}

	//if(num == 0)
	//    printf("num�� 0�Դϴ�.\n");
	//else if(num == 1)
	//    printf("num�� 1�Դϴ�.\n");
	//else if(num == 2)
	//    printf("num�� 2�Դϴ�.\n");
	//else
	//    printf("num�� 0 ~ 2 �̿��� ���Դϴ�.\n");

	// swtich���� �⺻ ������ ���� �н��Ͽ����ϴ�.
	// break�� ������ ��� �ɱ��?

	switch (num)
	{
	case 0:
	case 1:
		printf("0,1�� ���� ���� Ȯ�� : \n");
		break;
	case 2:
	case 3:
	case 4:
		printf("2,3,4�� ���� ���� Ȯ�� : \n");

	default:
		printf("num�� 0 ~ 2 �̿��� ���Դϴ�.\n");
	}


	// switch( )   // int ������ �Է��߽��ϴ�.
	// ( ) �ȿ� �� �� �ִ� ������ Ÿ���� ������!
	// float, dobule �Ǽ��� ������ Ÿ���� ���� ������ ������ �߻��մϴ�.

	char d_num = 1;

	switch (d_num)     // case :  case�� :(�ݷ�) ���̿� ���� ����. ������ �ƴϰ�,  ������ ������ ��ȯ�Ǵ� ���̿��� ����� ����.  
		// ������ ������, switch ~ case���� ����ϴ� ������ �������� ����� �մϴ�.
	{
	case 'W':
		break;
	case 'A':
		break;
	case 'D':
		break;
	case 'S':
		break;
	}
}