#include <stdio.h>
long long a, s = 0, d = 0, g = 1;
int main() {
	scanf("%lld", &a);
	for (; s < a; g++)
		s += g;
	if (g % 2) {
		printf("%lld/%lld", g - s + a - 1, s - a + 1);
	}
	else {
		printf("%lld/%lld", s - a + 1, g - s + a - 1);
	}
}
