#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//int a;
	//double b;
	//char c='A';
	//char d[20] = "ABCDEFG";
	//printf("int형 변수 주소 > %p \n", &a);
	//printf("double형 변수 주소 > %p \n", &b);
	//printf("char형 변수 주소 > %p \n", &c);

	int a;
	int* pa; //*는 포인터라는 뜻

	pa = &a;	//변수a의 주소를 포인터변수에 할당
	*pa = 10; //pa가 포인팅하는 곳에 10을 넣어라.

	printf("포인트로 a 값 출력 > %d\n", *pa); //pa가 가르키고있는 값을 출력
	printf("변수명으로 a 값 출력 > %d\n", a);

	a = 12;

	printf("포인트로 a 값 출력 > %d\n", *pa);
	printf("변수명으로 a 값 출력 > %d\n", a);
}
