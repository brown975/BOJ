#include <stdio.h>
int a, s, d;
int main(void) {
	scanf("%d", &a);
	for (int g = 1, h; g < a; g++) {
		h = 1;
		for (; h < g; h++)
			printf(" ");
		for (; h <= a * 2 - g; h++)
			printf("*");
		printf("\n");
	}
	for (int g = 0, h; g < a; g++) {
		h = g + 1;
		for (; h < a; h++)
			printf(" ");
		h = -1;
		for (; h < 2 * g; h++)
			printf("*");
		h = g;
		printf("\n");
	}
}
