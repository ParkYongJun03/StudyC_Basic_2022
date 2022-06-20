#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//콘솔에서 C프로그램 할 때 실제적으로 쓰는 메인 엔트리 포인트 함수 원형
//솔루션 우클릭 -> 속성 -> 디버깅 -> 명령인수에 값을 넣는 것으로 터미널이 아니라도 명령인수 디버깅을 할 수 있다.
void main(int argc, char** argv) {
	int i;
	for (i = 0; i < argc; i++) {
		if (i == 1) {
			if (strcmp(argv[i], "--version")==0) {
				printf("git version 2.29.1.window.1\n");
			}
			else if (strcmp(argv[i], "--help") == 0) {
				printf("도움말입니다!....\n");
			}
		}
		//printf("%d번째 인수 %s\n", i, argv[i]);
	}
	system("pause");
}