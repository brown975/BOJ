#include <stdio.h>
int a, s, d;
int main(void) {
	scanf("%d", &a);
	for (int g = 0, h; g < a; g++) {
		h = 0;
		for (; h < g; h++)
			printf(" ");
		h++;
		for (; h < a * 2 - g; h++)
			printf("*");
		printf("\n");
	}
}
