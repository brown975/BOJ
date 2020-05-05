#include <stdio.h>
int a, s, d, f, g, h;
int main() {
	scanf("%d : %d : %d\n%d : %d : %d", &a, &s, &d, &f, &g, &h);
	printf("%d", (((f - a) * 3600 + (g - s) * 60 + h - d) + 86400) % 86400);
}
