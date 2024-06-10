#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int min = 1; // 범위 최소값
    int max = 100; // 범위 최대값
    int target; // 맞추어야 할 숫자
    int guess; // 사용자의 추측
    int attempts = 0; // 시도 횟수

    // 난수 생성을 위해 시간으로 시드 설정
    srand(time(NULL));

    // target에 랜덤하게 숫자 할당
    target = min + rand() % (max - min + 1);

    printf("1부터 100까지의 숫자를 맞춰보세요.\n");

    // 사용자가 숫자를 맞출 때까지 반복
    do {
        printf("추측한 숫자를 입력하세요: ");
        scanf("%d", &guess);

        // 시도 횟수 증가
        attempts++;

        // 추측한 숫자와 타겟 숫자를 비교
        if (guess > target) {
            printf("너무 큽니다.\n");
        }
        else if (guess < target) {
            printf("너무 작습니다.\n");
        }
        else {
            printf("정답입니다! %d번 만에 맞췄습니다.\n", attempts);
        }
    } while (guess != target);

    return 0;
}