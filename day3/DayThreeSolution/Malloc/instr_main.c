//���ڿ� �Է� ó��
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {
	char temp[80];
	char* str[3];

	for (int i = 0; i < 3; i++) {
		printf("���ڿ��� �Է��ϼ��� > ");
		gets(temp);
		str[i] = (char*)malloc(strlen(temp) + 1); // strlen(temp) + 1 : NULL�� �߰�
		strcpy(str[i], temp); //
	}

	for (int i = 0; i < 3; i++) {
		printf("%s\n", str[i]);
		free(str[i]);
	}
}
