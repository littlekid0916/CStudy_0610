/*
	작성자 : 류희원
	작성일 : 2024-07-11
	학습내용 : 포인터
*/

/*
	포인터(pointer)
	메모리의 주소값을 저장하는 변수

	예)
	타입* 포인터이름 = &변수이름;
	또는
	타입* 포인터이름 = 주소값;


	포인터 연산자

	주소 연산자(&)
	변수의 이름 앞에 사용하여 해당 변수의 주소값을 반환
	'&'기호는 앰퍼샌드(ampersand)라고 읽으며 번지 연산자라고도 부른다

	참조 연산자(*)
	포인터의 이름이나 주소 앞에 사용하여 포인터에 가리키는 주소에 저장된 값을 반환
*/

#include "lectures.h"

void lecture17() {

	printf("겜프2 강의 시작!\n");

	int num;
	int num2;

	scanf_s("%d", &num);
	printf("num의 값 출력 : %d\n", num);
	
	// 포인터 * 위치는 상관없다.
	int* numPtr = &num;	// 포인터변수 선언과 초기화
	int * numPtr2 = &num;
	int *numPtr3 = &num;

	// 포인터를 출력하면 16진수 주소가 출력됨
	printf("%p\n", &numPtr);
	printf("%p\n", &numPtr2);
	printf("%p\n", &numPtr3);

	// 주소에 저장된 값을 가지고 오는 역참조(dereference) 연산자
	// 선언된 포인터 변수 앞에 * 붙임
	printf("%d\n", *numPtr);
	printf("%d\n", *numPtr2);
	printf("%d\n", *numPtr3);

	// 문제1
	// 정수형 변수 number에 20을 할당
	// 정수형 포인터 변수 numberPtr 선언후 number에 있는 주소를 할당
	// printf를 사용해서 numberPtr에 있는 값을 출력
	printf("문제1\n");
	int number = 20;
	int* numberPtr = &number;
	printf("numberPtr의 값(주소) : %p\n", numberPtr);
	printf("numberPtr이 가리키는 값 : %d\n", *numberPtr);

	// 포인터 변수를 이용하여 값을 변경
	printf("기존 number의 값 : %d\n", number);
	*numberPtr = 30;
	printf("변경된 number의 값 : %d\n", number);


	int a_num = 10;
	int* a_numPtr = &a_num;
	int* b_numPtr = a_numPtr;

	(*a_numPtr)++;	// *a_numPtr = 11
	(*b_numPtr)++;
	printf("%d\n", a_num);

	// 문제2
	// e_num1, e_num2 선언후 10, 20 할당
	// e_num1, e_num2를 가리키는 포인터 e_num1Ptr, e_num2Ptr를 선언 후 대입
	// int* temp 포인터를 선언
	// temp에 e_num1Ptr 대입 , e_num2에 -> e_num1 , e_num2 temp값 받아오기
	printf("문제2\n");
	int e_num1 = 10, e_num2 = 20;
	int* e_num1Ptr = &e_num1;
	int* e_num2Ptr = &e_num2;
	int* temp;
	printf("기존값 : %d %d\n", *e_num1Ptr, *e_num2Ptr);
	temp = e_num1Ptr;
	e_num1Ptr = e_num2Ptr;
	e_num2Ptr = temp;
	printf("변경값 : %d %d\n", *e_num1Ptr, *e_num2Ptr);

}