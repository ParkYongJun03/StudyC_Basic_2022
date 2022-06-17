#include <stdio.h>
int sum(int, int);

void main() {
	printf("합산하기\n");

	int total = sum(100, 30);

	printf("%d", total);
}

int sum(int a, int b) {
	return a + b;
}