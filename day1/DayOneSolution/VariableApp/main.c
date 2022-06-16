// 변수 학습 main.c
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void) {
	int a;
	int b, c;
	double da;
	float fa;
	char ch;

	a = 10;
	b = a; c = a + 20;
	da = 3.5;
	fa = 3.5f; // float에 실수값 할당
	ch = 'A';
	
	printf("변수 a 값 : %d\n", a);
	printf("변수 b 값 : %d\n", b);
	printf("변수 c 값 : %d\n", c);
	printf("변수 da 값 : %f\n", da);
	printf("변수 fa 값 : %lf\n", fa);
	printf("변수 ch 값 : %c\n", ch);
	printf("변수 ch 값 : %c, %c\n", 97, 65);


	for (int i = 2; i < 12; i++) {
		for (int j = 0; j < 10; j++) {
			printf("%c\t", i*10+j);
		}
		printf("\n");
	}
	printf("\n");

	char kch;
	kch = '한';
	printf("변수 kch 값 : %c\n", kch);

	short sh = 32767; //32767 +1 //overflow : -32768 ~ 32767
	int in = 2147483647;
	long ln = 2147483647;
	long long lln = 9223372036854775807; // 922경
	long long lln2 = pow(2, 62) + pow(2, 61) + pow(2, 60);

	printf("%d\n", sh);
	printf("%d\n", in);
	printf("%ld\n", ln);
	printf("%lld\n", lln);

	// 양수만 표현
	unsigned short ush = 65535; // +1 양수만
	printf("변수 ush 값 : %d\n", ush);

	float fv = 1.234567890123456789f;
	double dv = 1.234567890123456789;
	printf("변수 fv 값 : %.20lf\n", fv); // 7자리만 표현 함 
	printf("변수 dv 값 : %.20lf\n", dv); // 15자리
	return 0;
}