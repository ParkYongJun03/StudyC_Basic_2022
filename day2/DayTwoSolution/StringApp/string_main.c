#define VERSION 2
#include <stdio.h>
#include <string.h>
#if VERSION ==1
int main() {
	char str[80];
	strcpy(str, "apple");
	
	printf("%s\n", str);

	strcpy(str, "�ȳ��ϼ��俩���е�~");
	printf("%s\n", str);

	printf("�̸��� �Է��ϼ��� > ");
	gets(str);

	printf("�̸��� %s\n", str);

}
#elif VERSION == 2
int main() {
	char str2[20] = "mango tree";
	//���ڿ��� ���ϴ� ���̸�ŭ �߶� ������
	strncpy(str2, "apple-pie", 5);
	printf("%s\n", str2);	//mango tree -> apple tree
	strncpy(str2, "apple-pie", 6);
	printf("%s\n", str2);	//mango tree -> apple-tree

	char str3[80] = "straw";	//����
	strcat(str3, "berry");
	printf("%s\n", str3);	//strawberry

	strncat(str3, "piece", 3);
	printf("%s\n", str3);	//strawberry

	// ���ڿ� ���� ���� �Լ�
	printf("%d\n", strlen(str3)); //strawberrypie = 13

	// ���ڿ� �� �Լ�
	char str5[80] = "pear";		// 112, 101, 97, 114
	char str6[80] = "peach";	// 112, 101, 97, 99, 104

	printf("������ ���߿� ������ �����̸� > ");
	if (strcmp(str5, str6) > 0) {	//pear <-�갡 Ascii���� �� ŭ
		printf("%s\n", str5);
	}
	else
		printf("%s\n", str6);

	if (strncmp(str5, str6, 3)) {	//peach <-���� ���� & ���� ���Ա� ������ ����
		printf("%s\n", str5);
	}
	else
		printf("%s\n", str6);
}
#endif
