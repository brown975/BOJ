#include <stdio.h>
int a, s, d, f, g, h;
int main() {
	scanf("%d%d%d%d%d%d", &a, &s, &d, &f, &g, &h);
	printf("%d", (a == s) + (a == d) + (a == f) + (a == g) + (a == h));
}
