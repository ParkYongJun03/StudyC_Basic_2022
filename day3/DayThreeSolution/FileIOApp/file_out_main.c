#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {
	FILE* fp; // ����ü(Ŭ�������� ������ �մ� �Ͱ� ���� ����)
	char str[] = "banana";
	int i = 0;

	fp = fopen("C:\\Temp\\b.txt", "w"); // a.txt������ �б��� ����
	if (fp == NULL) {
		printf("������ ���� ���߽��ϴ�.\n");
		exit(1); // == return 1
	}
	while (str[i] != '\0') {
		fputc(str[i], fp);
		i++;
	}
	fputc('\n', fp);
	fclose(fp);	//������ �ݾ�����Ѵ�!! �ݵ��!!
}