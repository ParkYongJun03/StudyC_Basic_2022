#include <stdio.h>

int main() {
	double a = 1;
	for (int i = 0; i < 300; i++) {	//초기값 ; 반복조건 ; 증감연산
		a = a * 2;
	}
	printf("a = %lld\n", a);
}