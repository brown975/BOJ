#include <stdio.h>
int a, s, d, f;
int main() {
	scanf("%d%d%d%d", &a, &s, &d, &f);
	printf("%d", (--a / s) * d * f);
}
