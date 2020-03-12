#include <stdio.h>
long long a, s = 0, d = 0;
int main() {
	scanf("%lld", &a);
	if (a == 1) {
		printf("1");
		return 0;
	}
	s = (a + 4) / 6;
	for (int g = 0; s > 0; g++, d++)
		s -= g;
	printf("%lld", d);
}
