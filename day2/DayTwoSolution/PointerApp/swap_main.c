#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap(int *a, int *b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;

}
void main() {
	int a = 10;
	int b = 20;
	printf("%d %d\n", a, b);
	swap(&a, &b);
	printf("%d %d\n", a, b);
}