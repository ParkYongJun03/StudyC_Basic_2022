#include <stdio.h>

int main() {
	double a = 1;
	for (int i = 0; i < 300; i++) {	//�ʱⰪ ; �ݺ����� ; ��������
		a = a * 2;
	}
	printf("a = %lld\n", a);
}