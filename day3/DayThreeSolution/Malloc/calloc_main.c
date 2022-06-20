//calloc , reaclloc

#include <stdio.h>
#include <stdlib.h>

int main() {
	int* pi; // 정수형 포인터
	int i = 0, size = 5, count  = 0, num=0;
	
	//calloc
	pi = (int*)calloc(size, sizeof(int)); // 5의 int형 배열 0으로 초기화
	for (i = 0; i < size; i++) {
		printf("%d\t", *(pi+i));
	}

	while (1) {
		printf("양수만 입력하세요 > ");
		scanf("%d", &num);
		if (num <= 0)	break;
		//5보다 입력할 갯수가 늘어나면 사이즈를 늘려준,ㄴ
		// realloc
		if (count == size) {
			size += 5;
			pi = (int*)realloc(pi, sizeof(int) * size); // +5 증가
		}
		pi[count] = num;
		count++;
	}
	for (i = 0; i < count; i++) {
		printf("%5d",  pi[i]);
	}
	//if (pi == NULL) {
	//	printf("메모리가 부족합디나. \n");
	//	exit(1);	
	//}


	free(pi);
	exit(0);// 성공적으로 프로그램 종료 : 일반적으로 생략
}