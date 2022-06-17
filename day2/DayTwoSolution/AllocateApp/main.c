#include <stdio.h>
#include <stdlib.h>

void main() {
	int* pi;
	double *pd;
	char* pc;

	//malloc�� �⺻������ void*���� �����Ǿ��ִ�. (�տ� ���� Ÿ���� ������ �𸣱� ����)
	pi = (int *)malloc(sizeof(int)); //4����Ʈ�� �޸𸮸� �������� �Ҵ�
	if (pi == NULL) {
		printf("# �޸𸮰� �����մϴ�. \n");
		exit(1); //������������ ����
	}
	
	pd = (double*)malloc(sizeof(double)); // 8����Ʈ�� �޸𸮸� �������� �Ҵ�
	if (pd == NULL) {
		printf("# �޸𸮰� �����մϴ�. \n");
		exit(1); //������������ ����
	}

	*pi = 10;
	*pd = 3.141592;

	printf("%d\n", *pi);
	printf("%lf\n", *pd);
	printf("%d\n", sizeof(*pi));
	printf("%d\n", sizeof(*pd));

	free(pi); free(pd); // �޸� ����! ����õɶ����� ����
}