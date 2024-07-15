/*
	작성자 : 류희원
	작성일 : 2024-07-12
	학습내용 : 포인터 연산
*/

/*
	포인터 연산의 규칙
	1. 포인터끼리의 덧셈, 곱셈, 나눗셈은 아무런 의미가 없다
	2. 포인터끼리의 뺄셈은 두 포인터 사이의 상대적 거리를 나타낸다
	3. 포인터에 정수를 더하거나 뺄 수는 있지만, 실수와의 연산은 허용하지 않는다
	4. 포인터끼리 대입하거나 비교할 수 있다
*/

#include "lectures.h"

void lecture18() {

	int num = 10;
	int* numPtr = &num;
	(*numPtr)++;
	printf("num의 값 : %d\n", *numPtr);

	// 16진수로 포인터 변수에 값을 넣어서 주소의 값을 지정
	int* numPtrA = 0x100000;
	int* numPtrB = 0x100000;

	numPtrA = numPtrA + 1;	// numptrA++;
	numPtrB = numPtrB + 2;	// numPtrB+=2;

	printf("PtrA의 값 : %p\n", numPtrA);
	printf("PtrB의 값 : %p\n", numPtrB);

	// 주소의 크기 구하기
	printf("포인터 변수의 크기 : %d\n", sizeof(numPtrA));	// x86 : 4
	printf("포인터 변수의 크기 : %d\n", sizeof(numPtrA));	// x64 : 8

	// 포인터 변수의 크기가 다른 이유

	// 포인터와 배열
	int numArr[5] = { 11, 22, 33, 44, 55 };
	int index = 0;
	printf("numArr 3번째 요소 : %d\n", numArr[index + 2]);

	// index의 값에 더하기 또는 빼기 연산자를 사용해서 numArr을 반복문으로 출력
	printf("numArr 정방향 출력\n");
	for (int i = 0; i < 5; i++) {
		printf("%d\n", numArr[i]);
	}
	printf("numArr 역방향 출력\n");
	for (int i = 4; i >= 0; i--) {
		printf("%d\n", numArr[i]);
	}


	int arr1[3] = { 0 , 1 , 2 };
	printf("배열의 이름 : %p\n", arr1);

	for (int i = 0; i < 3; i++) {
		printf("배열의 요소 %d 요소 : %p\n", i, &arr1[i]);
	}


	char* charPtr = 0x1000000;
	charPtr++;
	printf("%p\n", charPtr);	// 0x1000001
	short* shortPtr = 0x1000000;
	shortPtr++;
	printf("%p\n", shortPtr);	// 0x1000002

	// sizeof(데이터형) : 데이터의 크기
	// sizeof(데이터형) x n(더한 수) 크기가 증가한다.
	charPtr += 10; // 0x1000000 + 10(1x10);
	shortPtr += 10; // 0x1000000 + 20(2x10);

	int arr2[3] = { 0 , 1 , 2 };
	int* s_ptr = arr2;
	int* s_ptr2 = &arr2[0];

	&arr2[0];	// 1번째 주소
	&arr2[1];	// 2번째 주소
	&arr2[2];	// 3번째 주소

	printf("주소의 연산 후 역참조 : %d\n", *(s_ptr + 1));
	printf("역참조 후 값 덧셈 : %d\n", (*s_ptr2) + 1);

	// 문제1
	// 길이가 5인 배열 선언 firstArr {1,2,3,4,5}
	// 배열을 포인터 변수(firstArrPtr)에 대입
	// 반복문과 연산을 이용해서 주소의 값을 3을 증가

	int firstArr[5] = { 1, 2, 3, 4, 5 };
	int* firstArrPtr = firstArr;
	for (int i = 0; i < 5; i++) {
		*firstArrPtr += 3;
		firstArrPtr++;
	}
	for (int i = 0; i < 5; i++) {
		printf("배열의 요소에 3을 증가시킨 값 : %d\n", firstArr[i]);
	}


	int exArr[5] = { 0 };
	int* arrPtr2 = exArr;
	printf("배열의 크기 : %d\n", sizeof(exArr));
	printf("포인터의 크기 : %d\n", sizeof(arrPtr2));

	// 문제2
	// 역순으로 출력
	int secondArr[5] = { 1, 2, 3, 4, 5 };
	int* secondArrPtr = secondArr;
	secondArrPtr += 4;
	for (int i = 0; i < 5; i++) {
		printf("%d\n", *secondArrPtr);
		secondArrPtr--;
	}


	int o_Arr[3] = { 1, 2, 3 };
	int* o_ArrPtr = o_Arr;
	for (int i = 0; i < 3; i++) {
		printf("*(Ptr + i) : %d		", *(o_ArrPtr + i));
		printf("*(Arr + i) : %d		", *(o_Arr + i));
		printf("Arr[i] : %d		", o_Arr[i]);
		printf("Ptr[i] : %d\n", o_ArrPtr[i]);
	}


	int* ob_numptrA = 0x100000;	   // int num = 0;  

	// printf("%p", ob_numptrA);
	// printf("%d", *ob_numptrA);
	// 포인터 직접 주소 배정해주는 것은 오류가 발생할 가능성이 매우 높음

	ob_numptrA = 0;
	ob_numptrA = NULL;

	/*
		널 포인터(null pointer)
		0이나 NULL을 대입하여 초기화한 포인터
		아무것도 가리키지 않는 포인터라는 의미
	*/

	// 문제3
	// 길이가 6인 배열을 선언 후 역순으로 출력
	int t_arr[6] = { 1, 2, 3, 4, 5, 6 };
	int* frontPtr = (t_arr + 0);
	int* backPtr = (t_arr + 5);
	int temp;

	printf("변경 전\n");
	for (int i = 0; i < 6; i++) {
		printf("%d", t_arr[i]);
	}
	printf("\n");
	for (int i = 0; i < 3; i++) {
		temp = *frontPtr;
		*frontPtr = *backPtr;
		*backPtr = temp;
		frontPtr++;
		backPtr--;
	}
	printf("변경 후\n");
	for (int i = 0; i < 6; i++) {
		printf("%d", t_arr[i]);
	}

}