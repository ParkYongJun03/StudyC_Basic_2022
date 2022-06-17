#define VERSION 2
#include <stdio.h>
#include <string.h>
#if VERSION ==1
int main() {
	char str[80];
	strcpy(str, "apple");
	
	printf("%s\n", str);

	strcpy(str, "안녕하세요여러분들~");
	printf("%s\n", str);

	printf("이름을 입력하세요 > ");
	gets(str);

	printf("이름은 %s\n", str);

}
#elif VERSION == 2
int main() {
	char str2[20] = "mango tree";
	//문자열을 원하는 길이만큼 잘라서 복사기능
	strncpy(str2, "apple-pie", 5);
	printf("%s\n", str2);	//mango tree -> apple tree
	strncpy(str2, "apple-pie", 6);
	printf("%s\n", str2);	//mango tree -> apple-tree

	char str3[80] = "straw";	//빨대
	strcat(str3, "berry");
	printf("%s\n", str3);	//strawberry

	strncat(str3, "piece", 3);
	printf("%s\n", str3);	//strawberry

	// 문자열 길이 리턴 함수
	printf("%d\n", strlen(str3)); //strawberrypie = 13

	// 문자열 비교 함수
	char str5[80] = "pear";		// 112, 101, 97, 114
	char str6[80] = "peach";	// 112, 101, 97, 99, 104

	printf("사전에 나중에 나오는 과일이름 > ");
	if (strcmp(str5, str6) > 0) {	//pear <-얘가 Ascii값이 더 큼
		printf("%s\n", str5);
	}
	else
		printf("%s\n", str6);

	if (strncmp(str5, str6, 3)) {	//peach <-값이 같고 & 먼저 나왔기 때문에 나옴
		printf("%s\n", str5);
	}
	else
		printf("%s\n", str6);
}
#endif
