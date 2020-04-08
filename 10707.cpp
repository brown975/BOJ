#include <stdio.h>
int a, s, d, f, g;
int main() {
	scanf("%d%d%d%d%d", &a, &s, &d, &f, &g);
	if (g * a > ((g - d) > 0 ? (g - d) : 0) * f + s)
		printf("%d", ((g - d) > 0 ? (g - d) : 0) * f + s);
	else
		printf("%d", g * a);
}
