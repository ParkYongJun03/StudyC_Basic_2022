// ����� �� �Է�
#define _CRT_SECURE_NO_WARNINGS // strcpy, scanf ���� ����� �� ��ó���� ������ ������

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main() {
	//int a;
	int res;

	//printf("������ �Է��ϼ��� > ");
	////res =1 ���������� �Է�, 0 �߸��� �� �Է�
	//res = scanf("%d", &a); // �ֿܼ��� Ű���� �Է�,  a������ �����ּ�!!
	//printf("�Էµ� �� : %d \n", a);
	//printf("%d\n", res);

	int age;
	double height;

	printf("���̿� Ű�� �Է��ϼ��� > ");
	res = scanf("%d%lf", &age, &height);
	printf("%d, %lf\n", age, height);
	//printf("%d\n", res);

	char grade;
	char name[20];
	printf("���� �Է� > ");
	res=scanf(" %c", &grade);

	printf("�̸� �Է� > ");
	res=scanf("%s", name); // ���ڿ�, ������ ��ü�� ������ ���� �ּҸ� ��Ÿ��

	printf("%s �л��� ������ %c", name, grade);
}