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
		if ((a % 2) ^ (s % 2)) {
			for (int g = 0; g < s; g++)
				printf("* ");
			printf("\n");
		}
		else {
			for (int g = 0; g < s; g++)
				printf(" *");
			printf("\n");
		}
	}
}
