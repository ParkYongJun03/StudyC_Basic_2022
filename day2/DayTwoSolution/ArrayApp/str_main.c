#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() {
	//char str[80] = "applejam"; // ���� �迭 ��Ҵ� ��� �� ���ڷ� ä����
	//printf("���ʹ��ڿ� : %s\n", str);
	//printf("���ڿ� �Է� > ");
	//scanf("%s", &str);

	//printf("�Էµ� ���ڿ� : %s", str);
	char str1[80] = "cat"; // ���� �迭 ��Ҵ� ��� �� ���ڷ� ä����
	char str2[80];
	char* str3 = "Hello World!\n";
	printf("%s", str3);
	printf("%s\n%s\n", str1, str2);
	strcpy(str2, str1);	//���ڿ� ���� �Լ�
	printf("%s\n%s\n", str1, str2);

	printf("���ڿ� �Է� > ");
	gets(str2);
	puts("�Է� ���ڿ� > ");//��� \n�� �ڵ����� �� �ִ�.
	puts(str2);
}