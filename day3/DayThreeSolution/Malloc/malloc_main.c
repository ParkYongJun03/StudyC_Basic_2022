//�迭 �����Ҵ�

#include <stdio.h>
#include <stdlib.h>

int main() {
	int* pi;
	int i = 0, sum = 0;
	// �ٽ� ! �����Ҵ�

	pi = (int *)malloc(5 * sizeof(int)); //20����Ʈ�� �������� �Ҵ� �ްڴ�.
	if (pi == NULL) {
		printf("�޸𸮰� �����յ�. \n");
		exit(1); //exit() : unix���� �� �ڵ� -> 0=����, 1=�Ϲ����� ����, 2=builtin shell command ����;
	}
	printf("�ټ� ���� ���̸� �Է��ϼ��� > ");
	for (int i = 0; i < 5; i++) {
		scanf("%d", &pi[i]);	//�迭���·� �Է�
		sum += pi[i];	//*(pi + i)
	}
	printf("�ټ� ���� ��� ���� : %.1lf\n", sum/5.0);

	free(pi);
	exit(0);// ���������� ���α׷� ���� : �Ϲ������� ����
}