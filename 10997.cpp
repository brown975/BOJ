#include <stdio.h>
int a, s;
int main(void) {
	scanf("%d", &a);
	if (a == 1) {
		printf("*");
		return 0;
	}
	s = a;
	a *= 2;
	while (a-- > 1) {
		if (a % 2) {
			for (int g = 1; g < s - a / 2; g++)
				printf("* ");
			for (int g = -1; g < a * 2; g++) {
				if (((a + 1) / 2 == s) && (g < 1))
					continue;
				printf("*");
			}
			for (int g = 2; g < s - a / 2; g++)
				printf(" *");
		}
		else {
			for (int g = 0; g < s - a / 2; g++) {
				if (a + 2 == s * 2) {
					printf("*\n");
					break;
				}
				printf("* ");
			}
			if (a + 2 == s * 2) {
				continue;
			}
			for (int g = 1; g < a * 2; g++)
				printf(" ");
			for (int g = 1; g < s - a / 2; g++)
				printf(" *");
		}
		printf("\n");
	}
	a = s;
	a *= 2;
	a--;
	for (int g = 0; g < a; g++) {
		if (g == a - 1)
			printf("*");
		else
			printf("* ");
	}
	printf("\n");
	for (int g = 0; g < a; g++) {
		if (g == a - 1)
			printf("*");
		else
			printf("* ");
	}
	printf("\n");
	while (a-- > 1) {
		if (a % 2) {
			for (int g = 0; g < a / 2; g++)
				printf("* ");
			for (int g = a * 2 + 1; g < s * 4; g++)
				printf("*");
			for (int g = 0; g < a / 2; g++)
				printf(" *");
		}
		else {
			for (int g = 0; g < a / 2; g++)
				printf("* ");
			for (int g = a * 2 + 3; g < s * 4; g++)
				printf(" ");
			for (int g = 0; g < a / 2; g++)
				printf(" *");
		}
		printf("\n");
	}
}
