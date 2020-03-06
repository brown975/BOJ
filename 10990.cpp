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
		if (a + 1 != s)
			printf("*");
		for (int g = 0; g < (s - a) * 2 - 3; g++)
			printf(" ");
		printf("*\n");
	}
}
