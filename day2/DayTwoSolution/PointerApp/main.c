#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//int a;
	//double b;
	//char c='A';
	//char d[20] = "ABCDEFG";
	//printf("int�� ���� �ּ� > %p \n", &a);
	//printf("double�� ���� �ּ� > %p \n", &b);
	//printf("char�� ���� �ּ� > %p \n", &c);

	int a;
	int* pa; //*�� �����Ͷ�� ��

	pa = &a;	//����a�� �ּҸ� �����ͺ����� �Ҵ�
	*pa = 10; //pa�� �������ϴ� ���� 10�� �־��.

	printf("����Ʈ�� a �� ��� > %d\n", *pa); //pa�� ����Ű���ִ� ���� ���
	printf("���������� a �� ��� > %d\n", a);

	a = 12;

	printf("����Ʈ�� a �� ��� > %d\n", *pa);
	printf("���������� a �� ��� > %d\n", a);
}
