#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int arr[5] = {0, }; //배열 초기화
	int sum = 0;
	float avg = 0;
	arr[0] = 90;
	arr[1] = 91;
	arr[2] = 92;
	arr[3] = 93;
	scanf("%d", &arr[4]);

	for (int i = 0; i < 5; i++) {
		printf("%d\n", arr[i]);
		sum += arr[i];
	}
	avg = (float)sum / sizeof(arr)*sizeof(int);
	printf("%d", sizeof(int));
	printf("모든 학생의 점수 총합 : %d\n", sum);
	printf("모든 학생의 점수 평균 : %lf\n", avg);
}