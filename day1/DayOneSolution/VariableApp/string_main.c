// 문자열 학습 main.c
#define _CRT_SECURE_NO_WARNINGS // strcpy, scanf 등을 사용할 때 전처리기 에러를 막아줌

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main() {
	const double tax_rate = 0.12; //세율 초기화
	char fruit[7] = "햇사과";
	int ia = 3;
	int a = 101, b=1011;
	printf("%d\n", ia);
	printf("%s\n", fruit);

	strcpy(fruit, "apple");
	printf("%s\n", fruit);

	printf("%d\n", a >> 1);
	// tax_rate = 0.15; // const 값은 수정이 불가하다.
	// 지역변수를 초기화시키지 않으면 안 써진다.

}