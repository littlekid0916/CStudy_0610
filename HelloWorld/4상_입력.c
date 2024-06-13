// 입력
// scanf 함수의 실습
// 변수 미리 선언 (입력을 받아서 저장할 변수를 미리 선언)
// 기본 사용법 : scanf("%d", &변수의 이름);
// scanf_s("%d", &num);

#include <stdio.h>

int main(void) {

	/*int num;
	printf("숫자를 입력해주세요.\n");
	scanf_s("%d", &num);
	printf("num의 들어간 숫자 : %d", num);*/

	// 문제1. 2개의 정수를 입력 받아서 두 수의 뺄셈과 곱셈의 결과를 출력
	printf("문제1\n");
	int firstNum1, firstNum2;
	printf("첫번째 정수를 입력해주세요 : ");
	scanf_s("%d", &firstNum1);
	printf("두번째 정수를 입력해주세요 : ");
	scanf_s("%d", &firstNum2);
	printf("뺄셈 : %d\n", firstNum1 - firstNum2);
	printf("곱셈 : %d\n", firstNum1 * firstNum2);
	
	// 문제2. 3개의 정수를 입력 받아서 secondNum1 * secondNum2 + secondNum3을 출력
	printf("문제2\n");
	int secondNum1, secondNum2, secondNum3;
	printf("첫번째 정수를 입력해주세요 : ");
	scanf_s("%d", &secondNum1);
	printf("두번째 정수를 입력해주세요 : ");
	scanf_s("%d", &secondNum2);
	printf("세번째 정수를 입력해주세요 : ");
	scanf_s("%d", &secondNum3);
	printf("%d * %d + %d의 값 : %d\n", secondNum1, secondNum2, secondNum3, secondNum1 * secondNum2 + secondNum3);

	// 문제3. 2개의 정수를 입력 받아서 몫과 나머지를 출력
	printf("문제3\n");

	return 0;
}