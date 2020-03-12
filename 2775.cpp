#include <stdio.h>
int a[15][15], s, d, f;
int main() {
	for (int g = 1; g < 15; g++)
		a[0][g] = g;
	for (int g = 1; g < 15; g++)
		for (int h = 1; h < 15; h++)
			a[g][h] = a[g - 1][h] + a[g][h - 1];
	scanf("%d", &s);
	while (s--) {
		scanf("%d%d", &d, &f);
		printf("%d\n", a[d][f]);
	}
}
