// ���ڿ� �н� main.c
#define _CRT_SECURE_NO_WARNINGS // strcpy, scanf ���� ����� �� ��ó���� ������ ������

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main() {
	const double tax_rate = 0.12; //���� �ʱ�ȭ
	char fruit[7] = "�޻��";
	int ia = 3;
	int a = 101, b=1011;
	printf("%d\n", ia);
	printf("%s\n", fruit);

	strcpy(fruit, "apple");
	printf("%s\n", fruit);

	printf("%d\n", a >> 1);
	// tax_rate = 0.15; // const ���� ������ �Ұ��ϴ�.
	// ���������� �ʱ�ȭ��Ű�� ������ �� ������.

}