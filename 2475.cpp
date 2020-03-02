#include <stdio.h>
int a, s, d, f, g;
int main() {
	scanf("%d%d%d%d%d", &a, &s, &d, &f, &g);
	printf("%d", (a * a + s * s + d * d + f * f + g * g) % 10);
}
