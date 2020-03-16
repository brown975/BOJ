#include <stdio.h>
int a, s, d[11] = { 1 };
int main() {
	scanf("%d%d", &a, &s);
	for (int g = 1; g <= a; g++)
		d[g] = d[g - 1] * g;
	printf("%d", d[a] / d[s] / d[a - s]);
}
