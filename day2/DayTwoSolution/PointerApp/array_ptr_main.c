#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define VERSION 2
#if VERSION == 1
void main() {
	int arr[3]; // 사이즈 3 배열

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
//*a이든 a[]이든 똑같다.
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
