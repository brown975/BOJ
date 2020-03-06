#include <stdio.h>
int a, s, d;
int main(void) {
	scanf("%d", &a);
	for (int g = 0, h; g < a; g++) {
		h = g + 1;
		for (; h < a; h++)
			printf(" ");
		h = g;
		for (; h < g * 2 + 1; h++)
			printf("*");
		printf("\n");
	}
	for (int g = 0, h; g < a; g++) {
		h = 0;
		for (; h <= g; h++)
			printf(" ");
		h = 1;
		for (; h < a - g; h++)
			printf("*");
		printf("\n");
	}
}
