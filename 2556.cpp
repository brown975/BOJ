#include <stdio.h>
int a, s, d;
int main(void) {
	scanf("%d", &a);
	for (int g = 0, h; g < a; g++) {
		h = 0;
		for (; h < a; h++)
			printf("*");
		printf("\n");
	}
}
