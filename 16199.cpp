#include <stdio.h>
int a, s, d, f, g, h;
int main() {
	scanf("%d%d%d%d%d%d", &a, &s, &d, &f, &g, &h);
	if (s < g || s == g && d <= h)
		printf("%d\n%d\n%d", f - a, f - a + 1, f - a);
	else
		printf("%d\n%d\n%d", f - a - 1, f - a + 1, f - a);
}
