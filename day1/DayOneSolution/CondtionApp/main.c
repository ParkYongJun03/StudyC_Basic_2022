// 입출력 중 입력
#define _CRT_SECURE_NO_WARNINGS // strcpy, scanf 등을 사용할 때 전처리기 에러를 막아줌

#include <stdio.h>
#include <stdlib.h>
void main() {
	int a, trs;
	printf("a를 입력하세요 > ");
	trs=scanf("%d", &a);
	printf("%d\n", a);
	// if문 생략
	if (a > 10) {
		printf("a는 10보다 큽니다.\n");
	}
	else if (a == 10) {
		printf("a는 10입니다.\n");
	}
	else {
		printf("a는 10보다 작습니다.\n");
	}

	char grade;
	printf("학점을 입력하세요 > ");
	scanf(" %c", &grade);

	switch (grade) {
	case 'A':
		printf("대단하네요\n");
		break;
	case 'B':
		printf("정말 잘하셨습니다!\n");
		break;
	case 'C':
		printf("잘했습니다.\n");
		break;
	case 'D':
		printf("겨우 통과했군요.\n");
		break;
	case 'F':
		printf("다음에 또 봐요.\n");
		break;
	default:
		printf("학점이 아닙니다.\n");
	}
	//
	if (grade == 'A') {
		printf("대단하네요\n");
	}
	else if (grade == 'B') {
		printf("정말 잘하셨습니다!\n");
	}
	else if (grade == 'C') {
		printf("잘했습니다.\n");
	}
	else if (grade == 'D') {
		printf("겨우 통과했군요.\n");
	}
	else if (grade == 'F') {
		printf("다음에 또 봐요.\n");
	}
	else {
		printf("학점이 아닙니다.\n");
	}
}