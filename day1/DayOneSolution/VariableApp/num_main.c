// 입출력 중 입력
#define _CRT_SECURE_NO_WARNINGS // strcpy, scanf 등을 사용할 때 전처리기 에러를 막아줌

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main() {
	//int a;
	int res;

	//printf("정수를 입력하세요 > ");
	////res =1 정상적으로 입력, 0 잘못된 값 입력
	//res = scanf("%d", &a); // 콘솔에서 키보드 입력,  a변수의 시작주소!!
	//printf("입력된 값 : %d \n", a);
	//printf("%d\n", res);

	int age;
	double height;

	printf("나이와 키를 입력하세요 > ");
	res = scanf("%d%lf", &age, &height);
	printf("%d, %lf\n", age, height);
	//printf("%d\n", res);

	char grade;
	char name[20];
	printf("학점 입력 > ");
	res=scanf(" %c", &grade);

	printf("이름 입력 > ");
	res=scanf("%s", name); // 문자열, 변수명 자체가 변수의 시작 주소를 나타냄

	printf("%s 학생의 학점은 %c", name, grade);
}