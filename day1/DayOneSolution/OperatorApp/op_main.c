// ����� �� �Է�
#define _CRT_SECURE_NO_WARNINGS // strcpy, scanf ���� ����� �� ��ó���� ������ ������

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main() {
	int a, b;
	int sum, sub, mul, inv;
	a = 10; b = 20;
	sum = a + b;
	sub = a - b;
	mul = a * b;
	inv = -a;

	printf("a = %d, b= %d\n", a, b);
	printf("sum = %d\n", sum);
	printf("sub = %d\n", sub);
	printf("mul = %d\n", mul);
	printf("inv = %d\n", inv);

	// ������ ~
	double apple;
	int banana, orange;

	apple = 5.0 / 2.0;
	banana = 5 / 2;
	orange = 5 % 2;
	printf("apple = %.1lf\n", apple);
	printf("banana = %d\n", banana);
	printf("orange = %d\n", orange);

	printf("%d\n", ++a);	// ++�� ���� �տ� ���̸� ��� ���� a�� ���� ��Ų��. (������)
	printf("%d\n", a++);	// ++�� ���� �ڿ� ���̸� ����� �� �Ŀ� a�� ������Ų��. (������)
	printf("%d\n", a);
}