/*
	작성자 : 류희원
	작성일 : 2024-07-15
	학습내용 : 포인터와 배열의 관계, 포인터와 상수
*/

/*
	포인터와 배열의 관계
	배열의 이름은 그 값을 변경할 수 없는 상수라는 점을 제외하면 포인터와 같다
	따라서 배열의 이름은 포인터 상수(constant pointer)이다

	포인터 상수(constant pointer)
	포인터 변수가 가리키고 있는 주소 값을 변경할 수 없는 포인터

	상수 포인터(pointer to constant)
	상수를 가르키는 포인터

	상수를 가리키는 그 자체가 상수인 포인터 constant pointer to constant
*/

#include "lectures.h"

void ShowData(const int* ptr) {
	const int* rPtr = ptr;
	printf("%d\n", *rPtr);
	//*rPtr = 20;
}

void ShowAllData(int* const arr, int len) {
	for (int i = 0; i < len; i++) {
		printf("%d", arr[i]);
	}
}

void lecture19() {

	const int s_num = 10;
	int* s_numPtr = &s_num;
	ShowData(s_numPtr);

	int s_arr[4] = { 1, 2, 3, 4 };
	int* s_arrPtr = s_arr;

	ShowAllData(s_arrPtr, 3);


	int arr[3] = { 1, 2, 3 };
	int* arrPtr = arr;

	printf("배열의 크기 : %d\n", sizeof(arr));
	printf("포인터의 크기 : %d\n", sizeof(arrPtr));


	// Constant(상수)

	// 상수 포인터(pointer to constant)
	// num의 값을 변경하지 못하게 막음
	const int num = 10;
	//num = 15;
	// 포인터 변수도 마찬가지. 역참조 연산자로도 값을 바꾸지 못함
	const int* numPtr = &num;
	//*numPtr = 15;

	// 포인터 상수(constant pointer)
	int num1 = 20;
	int num2 = 30;
	int* const numCptr = &num1;
	*numCptr = 40;
	//numCptr = &num2;

	// 상수를 가리키는 그 자체가 상수인 포인터 constant pointer to constant
	const int num3 = 40;
	const int num4 = 50;
	const int* const numCptr2 = &num3;
	//*numCptr2 = 50;
	//numCptr2 = &num4;

	// const를 포인터에 사용하는 이유
	// 포인터 변수가 절대로 변경되지 않음을 컴파일러 단계에서 보장하기 위해서
}