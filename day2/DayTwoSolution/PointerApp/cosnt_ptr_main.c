#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int a = 10;
	int b = 20;
	int *pa = &a;
	printf("a�� �� %d\n", *pa);

	pa = &b;
	printf("b�� �� %d\n", *pa);

	b = 30;
	printf("b�� �� %d\n", *pa);
}