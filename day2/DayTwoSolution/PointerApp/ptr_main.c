#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void main() {
	//int a = 0;
	//int* pa = &a;
	//printf("������ �Է� �ϼ��� > ");
	//scanf("%d", &a);
	//printf("�Էµ� ������ %d �Դϴ�.\n", a);
	//printf("�Էµ� ������ %d �Դϴ�.\n", *pa);
	//scanf("%d", pa);
	//printf("�Էµ� ������ %d �Դϴ�.\n", a);
	//printf("�Էµ� ������ %d �Դϴ�.\n", *pa);

	//printf("test %d\n", *&*&*pa);
	///////////////////////////////////////////////////////////////////////////////
/*
	int total;
	///////////////////////////////////
	int* pt = &total;
	//�����Ŷ� �Ʒ��Ŷ� ���� ���̴�.
	int* pt;
	pt = &total;
	///////////////////////////////////
	*/
	/////////////////////////////////////////////////////////////////////////////////
	int a = 10, b = 15, total;
	double avg;
//X	int* pa, pb, pt;
	int *pa, *pb, *pt;

	pa = &a; pb = &b;
	pt = &total;
	double* pg;
	pg = &avg;

	*pt = *pa + *pb;
	*pg = *pt / 2.0;

	printf("�� ������ �� : %d, %d\n", *pa, *pb);
	printf("�� ������ �� : %d\n", *pt);
	printf("�� ������ ��� : %.2lf\n", *pg);

}