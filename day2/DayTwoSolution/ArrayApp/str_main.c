#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() {
	//char str[80] = "applejam"; // 남는 배열 요소느 모두 널 문자로 채워짐
	//printf("최초문자열 : %s\n", str);
	//printf("문자열 입력 > ");
	//scanf("%s", &str);

	//printf("입력된 문자열 : %s", str);
	char str1[80] = "cat"; // 남는 배열 요소느 모두 널 문자로 채워짐
	char str2[80];
	char* str3 = "Hello World!\n";
	printf("%s", str3);
	printf("%s\n%s\n", str1, str2);
	strcpy(str2, str1);	//문자열 복사 함수
	printf("%s\n%s\n", str1, str2);

	printf("문자열 입력 > ");
	gets(str2);
	puts("입력 문자열 > ");//얘는 \n이 자동으로 들어가 있다.
	puts(str2);
}