#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {
	FILE* fp; // 구조체(클래스에서 변수만 잇는 것과 거의 동일)
	char str[] = "banana";
	int i = 0;

	fp = fopen("C:\\Temp\\b.txt", "w"); // a.txt파일을 읽기모드 오픈
	if (fp == NULL) {
		printf("파일을 열지 못했습니다.\n");
		exit(1); // == return 1
	}
	while (str[i] != '\0') {
		fputc(str[i], fp);
		i++;
	}
	fputc('\n', fp);
	fclose(fp);	//파일을 닫아줘야한다!! 반드시!!
}