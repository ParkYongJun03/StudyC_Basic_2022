// ���� �н� main.c
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
	fa = 3.5f; // float�� �Ǽ��� �Ҵ�
	ch = 'A';
	
	printf("���� a �� : %d\n", a);
	printf("���� b �� : %d\n", b);
	printf("���� c �� : %d\n", c);
	printf("���� da �� : %f\n", da);
	printf("���� fa �� : %lf\n", fa);
	printf("���� ch �� : %c\n", ch);
	printf("���� ch �� : %c, %c\n", 97, 65);


	for (int i = 2; i < 12; i++) {
		for (int j = 0; j < 10; j++) {
			printf("%c\t", i*10+j);
		}
		printf("\n");
	}
	printf("\n");

	char kch;
	kch = '��';
	printf("���� kch �� : %c\n", kch);

	short sh = 32767; //32767 +1 //overflow : -32768 ~ 32767
	int in = 2147483647;
	long ln = 2147483647;
	long long lln = 9223372036854775807; // 922��
	long long lln2 = pow(2, 62) + pow(2, 61) + pow(2, 60);

	printf("%d\n", sh);
	printf("%d\n", in);
	printf("%ld\n", ln);
	printf("%lld\n", lln);

	// ����� ǥ��
	unsigned short ush = 65535; // +1 �����
	printf("���� ush �� : %d\n", ush);

	float fv = 1.234567890123456789f;
	double dv = 1.234567890123456789;
	printf("���� fv �� : %.20lf\n", fv); // 7�ڸ��� ǥ�� �� 
	printf("���� dv �� : %.20lf\n", dv); // 15�ڸ�
	return 0;
}