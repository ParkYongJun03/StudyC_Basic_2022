// 입출력 중 입력
#define _CRT_SECURE_NO_WARNINGS // strcpy, scanf 등을 사용할 때 전처리기 에러를 막아줌

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main() {
	int a=1;
	double b = 2.1;
	printf("%lf\n", a+b);
	printf("%lf\n", (float)10);
	printf("%d\n", (int)10.5);	// 주의요망! 소수점 값은 날라간다.
	float fa = 4.2;
	double da = 3.14;
	printf("int형 변수 크기 : %d\n", sizeof(a));
	printf("float형 변수 크기 : %d\n", sizeof(fa));
	printf("double형 변수 크기 : %d\n", sizeof(da));
	
	printf("long형 변수 크기 : %d\n", sizeof(long));
	printf("long long형 변수 크기 : %d\n", sizeof(long long));
	printf("char형 변수 크기 : %d\n", sizeof(char));
	printf("short형 변수 크기 : %d\n", sizeof(short));
	printf("long double형 변수 크기 : %d\n", sizeof(long double)); //long double은 값이 넘어가면 알아서 커진다.

	printf("%lf\n", (a > b) ? (float)a : b);
	printf("%lf\n", (float)a);

	int c = 10;	// = 00000000 00000000 00000000 00001010
	int d = 12; // = 00000000 00000000 00000000 00001100
	printf("c & d : %d\n", c & d);	//8
	printf("c | d : %d\n", c | d);	//14
	printf("c ^ d : %d\n", c ^ d);	//6
	printf("~c : %d\n", ~c);	//-11
	printf("c << 1 : %d\n", c << 1);	// shift 연산 16+ 4 = 20
	printf("c << 1 : %d\n", c << 2);	// shift 연산 32+ 8 = 40
	printf("c >> 1 : %d\n", c >> 1);	//5

}