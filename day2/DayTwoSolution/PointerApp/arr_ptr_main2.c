#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void print_ary(int*, int);
void main() {
	int ary1[5] = {10, 20, 30, 40, 50}; // ũ��5 �迭
	int ary2[7] = { 10, 20, 30, 40, 50, 60, 70 };
	int size = sizeof(ary1) / sizeof(ary1[0]);	//size�� �������� �޴� ���
	print_ary(ary1, size);
	size = sizeof(ary2) / sizeof(ary2[0]);
	print_ary(ary2, size);
}
void print_ary(int *pa, int size) {	//�����ͷ� �޾Ƽ� �迭�� ����Ѵ�.
	for (int i = 0; i < size; i++) {
		printf("%d\n", pa[i]);
	}
	printf("\n");
}
