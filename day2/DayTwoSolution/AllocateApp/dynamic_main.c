#include <stdio.h>
#include <stdlib.h>

void main() {
	int* pi;
	double *pd;
	char* pc;

	//malloc은 기본적으로 void*으로 설정되어있다. (앞에 무슨 타입을 붙일지 모르기 때문)
	pi = (int *)malloc(sizeof(int)); //4바이트로 메모리를 동적으로 할당
	if (pi == NULL) {
		printf("# 메모리가 부족합니다. \n");
		exit(1); //비정상적으로 종료
	}
	
	pd = (double*)malloc(sizeof(double)); // 8바이트로 메모리를 동적으로 할당
	if (pd == NULL) {
		printf("# 메모리가 부족합니다. \n");
		exit(1); //비정상적으로 종료
	}

	*pi = 10;
	*pd = 3.141592;

	printf("%d\n", *pi);
	printf("%lf\n", *pd);
	printf("%d\n", sizeof(*pi));
	printf("%d\n", sizeof(*pd));

	free(pi); free(pd); // 메모리 해제! 재부팅될때까지 문제
}
