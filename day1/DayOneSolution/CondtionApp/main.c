// ����� �� �Է�
#define _CRT_SECURE_NO_WARNINGS // strcpy, scanf ���� ����� �� ��ó���� ������ ������

#include <stdio.h>
#include <stdlib.h>
void main() {
	int a, trs;
	printf("a�� �Է��ϼ��� > ");
	trs=scanf("%d", &a);
	printf("%d\n", a);
	// if�� ����
	if (a > 10) {
		printf("a�� 10���� Ů�ϴ�.\n");
	}
	else if (a == 10) {
		printf("a�� 10�Դϴ�.\n");
	}
	else {
		printf("a�� 10���� �۽��ϴ�.\n");
	}

	char grade;
	printf("������ �Է��ϼ��� > ");
	scanf(" %c", &grade);

	switch (grade) {
	case 'A':
		printf("����ϳ׿�\n");
		break;
	case 'B':
		printf("���� ���ϼ̽��ϴ�!\n");
		break;
	case 'C':
		printf("���߽��ϴ�.\n");
		break;
	case 'D':
		printf("�ܿ� ����߱���.\n");
		break;
	case 'F':
		printf("������ �� ����.\n");
		break;
	default:
		printf("������ �ƴմϴ�.\n");
	}
	//
	if (grade == 'A') {
		printf("����ϳ׿�\n");
	}
	else if (grade == 'B') {
		printf("���� ���ϼ̽��ϴ�!\n");
	}
	else if (grade == 'C') {
		printf("���߽��ϴ�.\n");
	}
	else if (grade == 'D') {
		printf("�ܿ� ����߱���.\n");
	}
	else if (grade == 'F') {
		printf("������ �� ����.\n");
	}
	else {
		printf("������ �ƴմϴ�.\n");
	}
}