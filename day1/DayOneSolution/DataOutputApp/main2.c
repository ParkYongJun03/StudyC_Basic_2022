#include <stdio.h>
int main(void)
{
	//Ctrl + K + D �ϸ� �ڵ� �� ����
	//Ctrl , Ctrl �� �� ������ �ζ��� ��Ʈ�� ���δ�.
	printf("be Happy!\n");
	printf("12345678901234567890\n");
	printf("My \t Friend\n");
	printf("Goot\bd\tchance\n");
	printf("Cow\rW\a\n\n");

	// ������ �Ǽ� ȭ�����
	printf("%d\n", 10);
	printf("%lf\n", 3.141592);
	//���� �߻�! -57999238 : �̻��� �� ��� ��
	printf("%d\n", 3.141592);
	printf("%.10lf\n\n", 3.141592);

	printf("%d�� %d�� ���� %d�Դϴ�.\n", 10, 20, 10 + 20);
	// lf���ٰ� ������ ������ �̻��ϰ� ���´�.
	printf("%.1lf - %.1lf = %.1lf\n", 3, 1, 3 - 1);
	printf("%.1lf - %.1lf = %.1lf\n", 3.4, 1.2, 3.4 - 1.2);

	//���� ǥ��
	printf("%d\t", 12);	// 10���� 12
	printf("%d\t", 014);	// 8���� 12
	printf("%d\t", 0xC);	// 16���� 12, c, C ����

	printf("\n\n");
	//���� ǥ���
	printf("%.2lf\n", 1e6);
	printf("%.7lf\n", 3.1415e-5);
	printf("%le\n", 0.0000000314);
	printf("%.2le\n", 0.0000000314);

	printf("\n\n");
	// ���ڿ� ���ڿ� ǥ��
	printf("%c\n", 'A'); // ���� Character
	printf("%s\n", "A"); // ���ڿ� String
	printf("%c�� %s�Դϴ�.\n", 'A', "A");

	printf("%c �̷��Ե� �� �� �ֽ��ϴ�.\nAscii 65�� 'A'�� �����ϴ�.\n", 65);
	return 0;
}