/*
	4강 이스케이프 문자, 입력함수
	작성자 : 류희원
	작성일 : 2024-06-13
	학습내용 : 이스케이프 문자 사용, 입력함수
*/

#include "lectures.h"

void lecture4() {

	/*int num = 500;
	printf("지금 보유한 금액 : 500원\n");
	printf("\"지금 보유한 금액 : %d원\"\n", num);*/

	// 약속된 규칙으로 문자 출력을 할 수 없는 문자들이 있다.
	// 이러한 문자들을 출력하고 싶을 때 이스케이프 : "\"
	// \ + (약속된 문자) : 새로운 기능을 구현할 수 있다.
	// 종류 : \n, \a, \t, \b, \r, \\, \?, \", \'

	/*
		\n : 한 줄을 띄어준다. 개행. new line
		\a : alarm. 윈도우 경고음을 출력
		\t : tab 문자 문자사이의 공간을 생성(tab)
		\b : backSpace. 콘솔 커서를 한 칸 뒤로 이동
		\r : 캐리지 리턴(return). 마우스 커서를 해당 줄의 맨 처음으로 이동
		\\, \?, \", \' : 시스템 약속 상 기본을 출력할 수 없는 문자를 출력하게 해줌
	*/
	/*printf("\"지금 보유한 금액 : %d원\"\n", num);
	printf("\a");
	printf("Hello\b\bhi\n");
	printf("건강하세요\r안녕\n");
	printf("반갑\t습니다\n");
	printf("\\ \' \" \? 에러가 발생 하나요?\n");*/

	// 변수를 이용한 데이터의 저장
	// 변수를 저장하는 다양한 방법
	// (1) 변수를 선언, 선언 할당
	int num1;
	num1 = 10;
	// (2) 변수 초기화(선언과 할당)
	int num2 = 10;
	// (3) 변수를 동시에 선언, 단 데이터 형태가 같은 것만
	int num3, num4, num5;
	// (4) 변수를 동시에 선언과 함께 할당
	int num6, num7, num8 = 10;

	// 변수 이름 작성 시 주의사항
	// 1. 변수의 이름은 숫자로 시작할 수 없다.
	// 2. 특수 기호를 이름으로 사용할 수 없다.(#, $)
	// 3. 문자 이름 사이에 띄어쓰기(공백)룰 사용할 수 없다.
	// 4. 키워드도 이름으로 사용할 수 없다.
	// 5. 변수 이름은 누구든 알아보기 쉽게 지어야 함.


	// 입력
	// scanf 함수의 실습
	// 변수 미리 선언 (입력을 받아서 저장할 변수를 미리 선언)
	// 기본 사용법 : scanf("%d", &변수의 이름);
	// scanf_s("%d", &num);

	/*int num;
	printf("숫자를 입력해주세요.\n");
	scanf_s("%d", &num);
	printf("num의 들어간 숫자 : %d", num);*/

	// 문제1. 2개의 정수를 입력 받아서 두 수의 뺄셈과 곱셈의 결과를 출력
	/*printf("문제1\n");
	int firstNum1, firstNum2;
	printf("첫번째 정수를 입력해주세요 : ");
	scanf_s("%d", &firstNum1);
	printf("두번째 정수를 입력해주세요 : ");
	scanf_s("%d", &firstNum2);
	printf("뺄셈 : %d\n", firstNum1 - firstNum2);
	printf("곱셈 : %d\n", firstNum1 * firstNum2);*/

	// 문제2. 3개의 정수를 입력 받아서 secondNum1 * secondNum2 + secondNum3을 출력
	/*printf("문제2\n");
	int secondNum1, secondNum2, secondNum3;
	printf("첫번째 정수를 입력해주세요 : ");
	scanf_s("%d", &secondNum1);
	printf("두번째 정수를 입력해주세요 : ");
	scanf_s("%d", &secondNum2);
	printf("세번째 정수를 입력해주세요 : ");
	scanf_s("%d", &secondNum3);
	printf("%d X %d + %d의 값 : %d\n", secondNum1, secondNum2, secondNum3, secondNum1 * secondNum2 + secondNum3);*/

	// 문제3. 2개의 정수를 입력 받아서 몫과 나머지를 출력
	/*printf("문제3\n");
	int a, b;
	printf("첫번째 정수를 입력해주세요 : ");
	scanf_s("%d", &a);
	printf("두번째 정수를 입력해주세요 : ");
	scanf_s("%d", &b);
	printf("몫 : %d\n", a / b);
	printf("나머지 : %d\n", a % b);*/

	// 문제4. 하나의 정수를 입력 받아서 제곱을 출력
	printf("문제4\n");
	int c;
	printf("제곱할 정수를 입력해주세요 : ");
	scanf_s("%d", &c);
	printf("%d\n", c * c);

	// 문제5. 세 개의 정수를 입력 받아서 {fifthNum1 - fifthNum2} X {fifthNum2 + fifthNum3} X {fifthNum3 * fifthNum1}의 결과를 출력
	printf("문제5\n");
	int fifthNum1, fifthNum2, fifthNum3;
	printf("첫번째 정수를 입력해주세요 : ");
	scanf_s("%d", &fifthNum1);
	printf("두번째 정수를 입력해주세요 : ");
	scanf_s("%d", &fifthNum2);
	printf("세번째 정수를 입력해주세요 : ");
	scanf_s("%d", &fifthNum3);
	printf("결과 : %d", (fifthNum1 - fifthNum2) * (fifthNum2 + fifthNum3) * (fifthNum3 * fifthNum1));

};