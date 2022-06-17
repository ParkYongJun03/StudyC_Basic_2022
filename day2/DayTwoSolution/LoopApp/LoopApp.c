//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
void main() {
	int res = 1, i = 0;
	while (i < 10) {
		if (i == 5) break;
		i++;
		res = res * i;
		printf("%d\n", res);
	}
}