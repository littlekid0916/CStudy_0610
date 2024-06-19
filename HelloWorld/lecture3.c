/*
	작성자 : 류희원
	작성일 : 2024-06-12
	학습내용	: 변수(Variable)
*/

/*
	기본 환경 설정
	- main함수 시작과 끝을 알리는 핵심 함수이다.
	- main 이름의 함수가 2이상 존재하면 에러가 발생하기 때문에 반드시 1개만 존재해야 한다.
	- 이름 대소문자 반드시 지켜줘야 한다.
	- 소스파일 -> 우클릭 -> 설정 -> 빌드에서 제외 기능으로 원하는 파일만 빌드할 수 있다.
*/

/*
	컴퓨터한테 명령을 하고, 그 명령한 내용을 저장하기 위해서 변수를 사용해야 한다.

	선언(Declare) : 메모리 공간을 할당받는 행위
	선언방법 : 타입 변수이름;

	할당(assignMent) : 선언한 변수에 데이터를 넣는 것
	할당방법 : 변수이름 = 값;

	초기화(Initialize) : 해당 변수를 사용할 수 있도록 초기값을 설정하는 행위
	초기화되지 않은 변수에는 아무런 의미 없는 값인 쓰레깃값만이 들어가 있다.
	변수의 선언과 동시에 초기화 방법 : 타입 변수이름 = 값;
*/

#include "lectures.h"

void lecture3() {

	int a = 5 + 3;
	a = 4 + 7;
	printf("%d\n", a);
	float b = 3.2f + 4.7f;
	printf("%f\n", b);

	// 문제1-1	변수의 이름 width, height, length 정수를 담을 수 있는 변수 선언
	int width = 12;
	int height = 10;
	int lenght = 8;

	// 문제1-2	세 변을 곱한 값(부피) volume 변수에 저장
	int volume = width * height * lenght;
	printf("%d\n", volume);

	// 문제1-3	volume / 165로 나누어 원하는 계산 값을 구한 후 printf 함수로 출력
	float volume_f = width * height * lenght;
	volume_f = volume_f / 165;

	printf("문제 3의 답 : %f\n", volume_f);

	// 문제2-1	섭씨(celsius), 화씨(fahrenheit)
	/*
		화씨 = 9 / 5 * 섭씨 + 32
		화씨가 실수로 표현될 수 있도록 변수를 선언
		9 / 5의 값이 1이 아닌 1.8이 나와야 한다.
		섭씨 1, 화씨 33.8
	*/

	float celsius = 1;
	float fahrenheit = 9.0f / 5.0f * celsius + 32;

	printf("섭씨 to 화씨 : %.1f\n", fahrenheit);

};