#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {
	FILE* fp; // ����ü(Ŭ�������� ������ �մ� �Ͱ� ���� ����)
	int ch;

	fp = fopen("C:\\Temp\\a.txt", "r"); // a.txt������ �б��� ����
	if (fp == NULL) {
		printf("������ ���� ���߽��ϴ�.\n");
		exit(1); // == return 1
	}
	while (1) {
		ch = fgetc(fp);
		if (ch == EOF) break; //End Of File
		putchar(ch);	//printf("%c", ch)
	}
	fclose(fp);	//������ �ݾ�����Ѵ�!! �ݵ��!!
}