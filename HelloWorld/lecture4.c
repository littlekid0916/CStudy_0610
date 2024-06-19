/*
	작성자 : 류희원
	작성일 : 2024-06-13
	학습내용 : 이스케이프 문자 사용, 입력함수
*/

#include "lectures.h"

void lecture4() {

	/*int num = 500;
	printf("지금 보유한 금액 : 500원\n");
	printf("\"지금 보유한 금액 : %d원\"\n", num);*/

	/*
		변수의 이름을 생성할 때에 반드시 지켜야 하는 규칙
		- 변수의 이름은 영문자(대소문자), 숫자, 언더스코어(_)로만 구성
		- 변수의 이름은 숫자로 시작될 수 없다
		- 변수의 이름 사이에는 공백을 포함할 수 없다
		- 변수의 이름으로 C언어에서 미리 정의된 키워드(keyword)는 사용할 수 없다

		\n : 한 줄을 띄어준다. 개행. new line
		\a : alarm. 윈도우 경고음을 출력
		\t : tab 문자 문자사이의 공간을 생성(tab)
		\b : backSpace. 콘솔 커서를 한 칸 뒤로 이동
		\r : 캐리지 리턴(return). 마우스 커서를 해당 줄의 맨 처음으로 이동
		\\, \?, \", \' : 시스템 약속 상 기본을 출력할 수 없는 문자를 출력하게 해줌
	*/

	int num;
	printf("\"지금 보유한 금액 : %d원\"\n", num);
	printf("\a");
	printf("Hello\b\bhi\n");
	printf("건강하세요\r안녕\n");
	printf("반갑\t습니다\n");
	printf("\\ \' \" \? 에러가 발생 하나요?\n");

	// 변수를 동시에 선언과 함께 할당
	int num6, num7, num8 = 10;

	/*
		입력(scanf) : 사용자로부터 다양한 데이터를 다양한 서식에 맞춰 입력받을 수 있게 해준다
		입력 방법 : scanf("%d", &변수 이름);
		scanf_s("%d", &num);
	*/
	
	printf("숫자를 입력해주세요.\n");
	scanf_s("%d", &num);
	printf("num의 들어간 숫자 : %d", num);

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
	printf("%d X %d + %d의 값 : %d\n", secondNum1, secondNum2, secondNum3, secondNum1 * secondNum2 + secondNum3);

	// 문제3. 2개의 정수를 입력 받아서 몫과 나머지를 출력
	printf("문제3\n");
	int a, b;
	printf("첫번째 정수를 입력해주세요 : ");
	scanf_s("%d", &a);
	printf("두번째 정수를 입력해주세요 : ");
	scanf_s("%d", &b);
	printf("몫 : %d\n", a / b);
	printf("나머지 : %d\n", a % b);

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