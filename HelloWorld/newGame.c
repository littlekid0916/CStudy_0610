#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int min = 1; // ���� �ּҰ�
    int max = 100; // ���� �ִ밪
    int target; // ���߾�� �� ����
    int guess; // ������� ����
    int attempts = 0; // �õ� Ƚ��

    // ���� ������ ���� �ð����� �õ� ����
    srand(time(NULL));

    // target�� �����ϰ� ���� �Ҵ�
    target = min + rand() % (max - min + 1);

    printf("1���� 100������ ���ڸ� ���纸����.\n");

    // ����ڰ� ���ڸ� ���� ������ �ݺ�
    do {
        printf("������ ���ڸ� �Է��ϼ���: ");
        scanf("%d", &guess);

        // �õ� Ƚ�� ����
        attempts++;

        // ������ ���ڿ� Ÿ�� ���ڸ� ��
        if (guess > target) {
            printf("�ʹ� Ů�ϴ�.\n");
        }
        else if (guess < target) {
            printf("�ʹ� �۽��ϴ�.\n");
        }
        else {
            printf("�����Դϴ�! %d�� ���� ������ϴ�.\n", attempts);
        }
    } while (guess != target);

    return 0;
}