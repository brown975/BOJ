#include <stdio.h>
int a, s, d;
int main(void) {
	scanf("%d", &a);
	for (int g = 1, h; g < a; g++) {
		h = 0;
		for (; h < g; h++)
			printf("*");
		for (; h < a * 2 - g; h++)
			printf(" ");
		for (; h < 2 * a; h++)
			printf("*");
		printf("\n");
	}
	for (int g = 0, h; g < a; g++) {
		h = g;
		for (; h < a; h++)
			printf("*");
		h = 0;
		for (; h < 2*g; h++)
			printf(" ");
		h = g;
		for (; h < a; h++)
			printf("*");
		printf("\n");
	}
}
