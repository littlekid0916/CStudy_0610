#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

	// printf 함수와 scanf 함수를 이용하여 게임 만들기

	// 플레이어를 환영하는 텍스트 출력
	printf("◈ 안녕하세요 환영합니다 ◈\n");
	printf("숫자를 입력하면 게임이 시작됩니다.\n");

	// 정수 또는 실수 데이터를 만들어서 컴퓨터가 생각하는 결과와 내가 생각하는 결과를 같이 출력
	srand(time(NULL));
	int computerVale = rand() % 100 + 1;
	int userValue;
	scanf_s("%d", &userValue);
	printf("컴퓨터 : %d 나 : %d\n", computerVale, userValue);

	return 0;
}