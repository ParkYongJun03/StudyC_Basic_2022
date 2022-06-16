#include <stdio.h>
int main(void)
{
	//Ctrl + K + D 하면 자동 줄 정렬
	//Ctrl , Ctrl 두 번 누르면 인라인 힌트가 보인다.
	printf("be Happy!\n");
	printf("12345678901234567890\n");
	printf("My \t Friend\n");
	printf("Goot\bd\tchance\n");
	printf("Cow\rW\a\n\n");

	// 정수와 실수 화면출력
	printf("%d\n", 10);
	printf("%lf\n", 3.141592);
	//문제 발생! -57999238 : 이상한 값 출력 됨
	printf("%d\n", 3.141592);
	printf("%.10lf\n\n", 3.141592);

	printf("%d와 %d의 합은 %d입니다.\n", 10, 20, 10 + 20);
	// lf에다가 정수를 넣으면 이상하게 나온다.
	printf("%.1lf - %.1lf = %.1lf\n", 3, 1, 3 - 1);
	printf("%.1lf - %.1lf = %.1lf\n", 3.4, 1.2, 3.4 - 1.2);

	//진수 표현
	printf("%d\t", 12);	// 10진수 12
	printf("%d\t", 014);	// 8진수 12
	printf("%d\t", 0xC);	// 16진수 12, c, C 동일

	printf("\n\n");
	//지수 표기법
	printf("%.2lf\n", 1e6);
	printf("%.7lf\n", 3.1415e-5);
	printf("%le\n", 0.0000000314);
	printf("%.2le\n", 0.0000000314);

	printf("\n\n");
	// 문자와 문자열 표현
	printf("%c\n", 'A'); // 문자 Character
	printf("%s\n", "A"); // 문자열 String
	printf("%c는 %s입니다.\n", 'A', "A");

	printf("%c 이렇게도 쓸 수 있습니다.\nAscii 65는 'A'와 같습니다.\n", 65);
	return 0;
}