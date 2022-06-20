//배열 동적할당

#include <stdio.h>
#include <stdlib.h>

int main() {
	int* pi;
	int i = 0, sum = 0;
	// 핵심 ! 동적할당

	pi = (int *)malloc(5 * sizeof(int)); //20바이트를 동적으로 할당 받겠다.
	if (pi == NULL) {
		printf("메모리가 부족합디나. \n");
		exit(1); //exit() : unix에서 온 코드 -> 0=성공, 1=일반적인 에러, 2=builtin shell command 에러;
	}
	printf("다섯 명의 나이를 입력하세요 > ");
	for (int i = 0; i < 5; i++) {
		scanf("%d", &pi[i]);	//배열형태로 입력
		sum += pi[i];	//*(pi + i)
	}
	printf("다섯 명의 평균 나이 : %.1lf\n", sum/5.0);

	free(pi);
	exit(0);// 성공적으로 프로그램 종료 : 일반적으로 생략
}