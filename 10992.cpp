#include <stdio.h>
long long a, s;
int main(void) {
	scanf("%lld", &a);
	if (a == 1) {
		printf("*");
		return 0;
	}
	a--;
	s = a;
	while (a--) {
		for (int g = 0; g <= a; g++)
			printf(" ");
		if (a + 1 != s)
			printf("*");
		for (int g = 3; g < (s - a) * 2; g++)
			printf(" ");
		printf("*\n");
	}
	for (int g = -1; g < 2 * s; g++)
		printf("*");
}
