#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	int a;
	int b = 0;
	scanf("%d", &a);
	if (a % 2 == 0) {
		a = a - 1;
		b = 1;
	}
	for (int i = 0; i < a / 2 + 1; i++) {
		if (i == a / 2 && b == 0) break;
		for (int j = (a - 1) / 2 - i; j > 0; j--) {
			printf("_");
		}
		printf("*");
		for (int j = 0; j < i * 2 - 1; j++) {
			printf("_");
		}
		if (i > 0) printf("*");
		for (int j = (a - 1) / 2 - i; j > 0; j--) {
			printf("_");
		}
		printf("\n");
	}
	for (int i = a / 2; i >= 0; i--) {
		for (int j = (a - 1) / 2 - i; j > 0; j--) {
			printf("_");
		}
		printf("*");
		for (int j = 0; j < i * 2 - 1; j++) {
			printf("_");
		}
		if (i > 0) printf("*");
		for (int j = (a - 1) / 2 - i; j > 0; j--) {
			printf("_");
		}
		printf("\n");
	}
	return 0;
}