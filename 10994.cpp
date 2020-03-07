#include <stdio.h>
int a, s;
int main(void) {
	scanf("%d", &a);
	s = a;
	a *= 2;
	while (a-- > 1) {
		if (a % 2) {
			for (int g = 1; g < s - a / 2; g++)
				printf("* ");
			for (int g = 1; g < a * 2; g++)
				printf("*");
			for (int g = 1; g < s - a / 2; g++)
				printf(" *");
		}
		else {
			for (int g = 0; g < s - a / 2; g++)
				printf("* ");
			for (int g = 3; g < a * 2; g++)
				printf(" ");
			for (int g = 0; g < s - a / 2; g++)
				printf(" *");
		}
		printf("\n");
	}
	a = s;
	a *= 2;
	a--;
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
