// ����� �� �Է�
#define _CRT_SECURE_NO_WARNINGS // strcpy, scanf ���� ����� �� ��ó���� ������ ������

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main() {
	int a=1;
	double b = 2.1;
	printf("%lf\n", a+b);
	printf("%lf\n", (float)10);
	printf("%d\n", (int)10.5);	// ���ǿ��! �Ҽ��� ���� ���󰣴�.
	float fa = 4.2;
	double da = 3.14;
	printf("int�� ���� ũ�� : %d\n", sizeof(a));
	printf("float�� ���� ũ�� : %d\n", sizeof(fa));
	printf("double�� ���� ũ�� : %d\n", sizeof(da));
	
	printf("long�� ���� ũ�� : %d\n", sizeof(long));
	printf("long long�� ���� ũ�� : %d\n", sizeof(long long));
	printf("char�� ���� ũ�� : %d\n", sizeof(char));
	printf("short�� ���� ũ�� : %d\n", sizeof(short));
	printf("long double�� ���� ũ�� : %d\n", sizeof(long double)); //long double�� ���� �Ѿ�� �˾Ƽ� Ŀ����.

	printf("%lf\n", (a > b) ? (float)a : b);
	printf("%lf\n", (float)a);

	int c = 10;	// = 00000000 00000000 00000000 00001010
	int d = 12; // = 00000000 00000000 00000000 00001100
	printf("c & d : %d\n", c & d);	//8
	printf("c | d : %d\n", c | d);	//14
	printf("c ^ d : %d\n", c ^ d);	//6
	printf("~c : %d\n", ~c);	//-11
	printf("c << 1 : %d\n", c << 1);	// shift ���� 16+ 4 = 20
	printf("c << 1 : %d\n", c << 2);	// shift ���� 32+ 8 = 40
	printf("c >> 1 : %d\n", c >> 1);	//5

}