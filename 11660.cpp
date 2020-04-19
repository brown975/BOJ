#include <stdio.h>
int a, s, d[1030][1030], f[1030][1030];
int main() {
	scanf("%d%d", &a, &s);
	for (int g = 1; g <= a; g++)
		for (int h = 1; h <= a; f[g][h] = f[g - 1][h] + f[g][h - 1] - f[g - 1][h - 1] + d[g][h], h++)
			scanf("%d", &d[g][h]);
	for (int g = 0, q, w, e, r; g < s; printf("%d\n", f[e][r] - f[q - 1][r] - f[e][w - 1] + f[q - 1][w - 1]), g++)
		scanf("%d%d%d%d", &q, &w, &e, &r);
}
