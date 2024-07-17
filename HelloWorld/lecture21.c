/*
	작성자 : 류희원
	작성일 : 2024-07-17
	학습내용 : 메모리 공간에 대한 이해, 동적 메모리 할당
*/

/*
	코드(code) 영역
	실행할 프로그램의 코드가 저장되는 영역으로 텍스트(text) 영역이라고도 한다
	CPU는 코드 영역에 저장된 명령어를 하나씩 가져가서 처리

	데이터(data) 영역
	프로그램의 전역 변수와 정적(static) 변수가 저장되는 영역
	데이터 영역은 프로그램의 시작과 함께 할당되며 프로그램이 종료되면 소멸

	힙(heap) 영역
	사용자가 직접 관리할 수 있는 '그리고 해야만 하는' 메모리 영역
	사용자에 의해 메모리 공간이 동적으로 할당되고 해제
	메모리의 낮은 주소에서 높은 주소의 방향으로 할당

	스택(stack) 영역
	함수의 호출과 관계되는 지역 변수와 매개변수가 저장되는 영역
	함수의 호출과 함께 할당되며 함수의 호출이 완료되면 소멸
	스택 영역에 저장되는 함수의 호출 정보를 스택 프레임(stack frame)이라고 함

	힙, 스택 영역을 나누는 이유 : 메모리 공간이 한정적이기 때문


	힙 오버 플로우
	힙이 스택을 침범

	스택 오버플로우(stack overflow)
	스택이 힙을 침범
	함수의 재귀 호출이 무한히 반복되면, 해당 프로그램은 스택 오버플로우에 의해 종료
	

	메모리의 동적 할당(dynamic allocation)
	힙 영역의 크기는 프로그램이 실행되는 도중인 런 타임(run time)에 사용자가 직접 결정하게 되는데
	이렇게 런 타임에 메모리를 할당받는 것을 메모리의 동적 할당이라고 한다

	malloc()
	프로그램이 실행 중일 때 사용자가 직접 힙 영역에 메모리를 할당

	free()
	힙 영역에 할당받은 메모리 공간을 다시 운영체제로 반환해 주는 함수
	데이터 영역이나 스택 영역에 할당되는 메모리의 크기는 컴파일 타임에 결정되어 프로그램이 실행되는 내내 고정
	
	동적 할당한 메모리는 반드시 해제 해줘야 함
*/

#include "lectures.h"

void AllocateArray(int count) {
	int* newPtr = malloc(sizeof(int) * count);
	for (int i = 0; i < count; ++i) {
		*(newPtr + i) = i + 1;
		printf("%d ", newPtr[i]);
	}
	free(newPtr);
}

void lecture21() {

	int num1 = 20;
	int* numPtr = &num1;
	int* const numPtr2 = malloc(4);

	*numPtr2 = num1;
	printf("%d\n", *numPtr2);

	free(numPtr2);
	// printf("%d\n", *numPtr2);

	int arr[4] = { 1, 2, 3, 4 };
	int* numPtr3 = malloc(sizeof(int) * 4);
	numPtr3 = arr;

	printf("%d\n", *(numPtr3 + 0));


	// 문제1
	// 동적으로 정수형 포인터 크기를 생성하는 함수
	printf("문제1\n");

	int* a_ptr = NULL;
	int count;
	scanf_s("%d", &count);
	AllocateArray(count);

	printf("\n");

	char c = 69;
	char c2 = 'a';
	printf("%d\n", c2);
	printf("%c\n", c2);

	char* s = "Hello";
	printf("%s\n", s);

	char sArr[5] = { 'H', 'e', 'l', 'l', 'o' };
	for (int i = 0; i < 5; ++i) {
		printf("%c\n", sArr[i]);
	}

	char* s2 = "Hello World";
	printf("%s\n", s2);

	printf("%c\n", *(s2 + 1));
	// W 출력
	printf("%c %d\n", *(s2 + 6), *(s2 + 6));
	// d 출력
	printf("%c %d\n", *(s2 + 10), *(s2 + 10));
	// 공백 출력
	printf("%c %d\n", *(s2 + 5), *(s2 + 5));
	// d 다음 요소 출력
	printf("%c %d\n", *(s2 + 11), *(s2 + 11));	// '0' = NULL

	printf("NULL문자를 이용해서 문자열 출력하기\n");
	int index = 0;
	while (*(s2 + index) != 0) {
		printf("%c", *(s2 + index));
		index++;
	}
}