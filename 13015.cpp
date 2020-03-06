#include <stdio.h>
int a, s;
int main(void) {
	scanf("%d", &a);
	for (int g = 0; g < a; g++)
		printf("*");
	for (int g = 3; g < 2 * a; g++)
		printf(" ");
	for (int g = 0; g < a; g++)
		printf("*");
	printf("\n");
	s = a--;
	while (a--) {
		for (int g = a + 1; g < s; g++)
			printf(" ");
		printf("*");
		for (int g = 2; g < s; g++)
			printf(" ");
		printf("*");
		for (int g = 0; g < a * 2 - 1; g++)
			printf(" ");
		if (a)
			printf("*");
		for (int g = 2; g < s; g++)
			printf(" ");
		printf("*");
		printf("\n");
	}
	a = s--; --s;
	while (s--) {
		for (int g = -1; g < s; g++)
			printf(" ");
		printf("*");
		for (int g = 2; g < a; g++)
			printf(" ");
		printf("*");
		for (int g = s * 2; g < a * 2 - 5; g++)
			printf(" ");
		printf("*");
		for (int g = 2; g < a; g++)
			printf(" ");
		printf("*");
		printf("\n");
	}
	for (int g = 0; g < a; g++)
		printf("*");
	for (int g = 3; g < 2 * a; g++)
		printf(" ");
	for (int g = 0; g < a; g++)
		printf("*");
}
