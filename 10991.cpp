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
		for (int g = 0; g < a; g++)
			printf(" ");
		for (int g = a; g < s; g++)
			printf("* ");
		printf("\n");
	}
}
