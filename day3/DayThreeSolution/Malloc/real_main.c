#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//�ֿܼ��� C���α׷� �� �� ���������� ���� ���� ��Ʈ�� ����Ʈ �Լ� ����
//�ַ�� ��Ŭ�� -> �Ӽ� -> ����� -> ����μ��� ���� �ִ� ������ �͹̳��� �ƴ϶� ����μ� ������� �� �� �ִ�.
void main(int argc, char** argv) {
	int i;
	for (i = 0; i < argc; i++) {
		if (i == 1) {
			if (strcmp(argv[i], "--version")==0) {
				printf("git version 2.29.1.window.1\n");
			}
			else if (strcmp(argv[i], "--help") == 0) {
				printf("�����Դϴ�!....\n");
			}
		}
		//printf("%d��° �μ� %s\n", i, argv[i]);
	}
	system("pause");
}