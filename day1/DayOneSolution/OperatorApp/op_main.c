// 입출력 중 입력
#define _CRT_SECURE_NO_WARNINGS // strcpy, scanf 등을 사용할 때 전처리기 에러를 막아줌

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

	// 나누기 ~
	double apple;
	int banana, orange;

	apple = 5.0 / 2.0;
	banana = 5 / 2;
	orange = 5 % 2;
	printf("apple = %.1lf\n", apple);
	printf("banana = %d\n", banana);
	printf("orange = %d\n", orange);

	printf("%d\n", ++a);	// ++을 변수 앞에 붙이면 출력 전에 a를 증가 시킨다. (전위형)
	printf("%d\n", a++);	// ++을 변수 뒤에 붙이면 출력을 한 후에 a를 증가시킨다. (후위형)
	printf("%d\n", a);
}