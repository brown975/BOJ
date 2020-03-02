#include <stdio.h>
int a, s, d;
int main(void) {
	scanf("%d", &a);
	for (int g = 0, h; g < a; g++) {
		h = g + 1;
		for (; h < a; h++)
			printf(" ");
		h = g;
		for (; h < g * 3 + 1; h++)
			printf("*");
		printf("\n");
	}
}
