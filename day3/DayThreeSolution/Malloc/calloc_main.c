//calloc , reaclloc

#include <stdio.h>
#include <stdlib.h>

int main() {
	int* pi; // ������ ������
	int i = 0, size = 5, count  = 0, num=0;
	
	//calloc
	pi = (int*)calloc(size, sizeof(int)); // 5�� int�� �迭 0���� �ʱ�ȭ
	for (i = 0; i < size; i++) {
		printf("%d\t", *(pi+i));
	}

	while (1) {
		printf("����� �Է��ϼ��� > ");
		scanf("%d", &num);
		if (num <= 0)	break;
		//5���� �Է��� ������ �þ�� ����� �÷���,��
		// realloc
		if (count == size) {
			size += 5;
			pi = (int*)realloc(pi, sizeof(int) * size); // +5 ����
		}
		pi[count] = num;
		count++;
	}
	for (i = 0; i < count; i++) {
		printf("%5d",  pi[i]);
	}
	//if (pi == NULL) {
	//	printf("�޸𸮰� �����յ�. \n");
	//	exit(1);	
	//}


	free(pi);
	exit(0);// ���������� ���α׷� ���� : �Ϲ������� ����
}