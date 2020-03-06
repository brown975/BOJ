#include <stdio.h>
long long a, s;
int main(void) {
	scanf("%lld", &a);
	if (a == 1) {
		printf("*");
		return 0;
	}
	s = a;
	while (a--) {
		for (int g = 0; g < s; g += 2)
			printf("* ");
		printf("\n");
		for (int g = 1; g < s; g += 2)
			printf(" *");
		printf("\n");
	}
}
