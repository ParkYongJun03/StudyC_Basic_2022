#define _CRT_SECCURE_NO_WARNINGS
#include <stdio.h>

void main() {
	char ch;
	int in;
	double db;

	char *pc = &ch;

	int* pi = &in;

	double* pd = &db;

	printf("일반 변수의 크기 --- \n");
	printf("sizeof char %zd\n", sizeof(ch));
	printf("sizeof int %zd\n", sizeof(int));
	printf("sizeof double %zd\n", sizeof(double));

	printf("일반 변수의 주소 크기 --- \n");
	printf("sizeof char %zd\n", sizeof(&ch));
	printf("sizeof int %zd\n", sizeof(&in));
	printf("sizeof double %zd\n", sizeof(&db));

	printf("포인터 변수의 크기 --- \n");
	printf("sizeof char pointer %zd\n", sizeof(pc));
	printf("sizeof char pointer %zd\n", sizeof(pi));
	printf("sizeof char pointer %zd\n", sizeof(pd));

}