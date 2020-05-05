#include <stdio.h>
int a, s, d, f, g, h;
int main() {
	scanf("%d%d%d%d%d%d", &a, &s, &d, &f, &g, &h);
	printf("%d", (f > a ? f - a : 0) + (g > s ? g - s : 0) + (h > d ? h - d : 0));
}
