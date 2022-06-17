#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void main() {
	//int a = 0;
	//int* pa = &a;
	//printf("정수를 입력 하세요 > ");
	//scanf("%d", &a);
	//printf("입력된 정수는 %d 입니다.\n", a);
	//printf("입력된 정수는 %d 입니다.\n", *pa);
	//scanf("%d", pa);
	//printf("입력된 정수는 %d 입니다.\n", a);
	//printf("입력된 정수는 %d 입니다.\n", *pa);

	//printf("test %d\n", *&*&*pa);
	///////////////////////////////////////////////////////////////////////////////
/*
	int total;
	///////////////////////////////////
	int* pt = &total;
	//위에거랑 아래거랑 같은 식이다.
	int* pt;
	pt = &total;
	///////////////////////////////////
	*/
	/////////////////////////////////////////////////////////////////////////////////
	int a = 10, b = 15, total;
	double avg;
//X	int* pa, pb, pt;
	int *pa, *pb, *pt;

	pa = &a; pb = &b;
	pt = &total;
	double* pg;
	pg = &avg;

	*pt = *pa + *pb;
	*pg = *pt / 2.0;

	printf("두 정수의 값 : %d, %d\n", *pa, *pb);
	printf("두 정수의 합 : %d\n", *pt);
	printf("두 정수의 평균 : %.2lf\n", *pg);

}