#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define VERSION 2
#if VERSION == 1
void main() {
	int arr[3]; // ������ 3 �迭

	*(arr + 0) = 10;
	*(arr + 1) = 20;
	*(arr + 2) = 30;


	for (int i = 0; i < 3; i++)
		printf("%d", arr[i]);
	printf("\n");

	*arr = 1;
	for (int i = 0; i < 3; i++)
		printf("%d", arr[i]);
	printf("\n");
}
#elif VERSION == 2
//*a�̵� a[]�̵� �Ȱ���.
void print_array(int *a) {
	for (int i = 0; i < 5;i++) {
		printf("%d\t", a[i]);
	}
}
void main() {
	int arry[5] = { 10, 20, 30, 40, 50 };
	print_array(arry);
}
#endif
