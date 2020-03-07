#include <stdio.h>
int a, s, d;
int main(void) {
	scanf("%d", &a);
	for (int g = 0, h; g < a; g++) {
		h = -1;
		for (; h < g; h++)
			printf("*");
		printf("\n");
	}
	a--;
	for (int g = 0, h; g < a; g++) {
		h = g;
		for (; h < a; h++)
			printf("*");
		printf("\n");
	}
}
