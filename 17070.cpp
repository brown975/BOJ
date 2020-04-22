#include <stdio.h>
int a, s[20][20], d[20][20][3];
int main() {
	d[1][2][2] = 1;
	scanf("%d", &a);
	for (int g = 1; g <= a * a; g++)
		scanf("%d", &s[(g - 1) / a + 1][(g - 1) % a + 1]);
	for (int g = 1; g <= a; g++)
		for (int h = 2; h <= a; h++)
			if (!s[g][h]) {
				d[g][h][0] = d[g - 1][h][0] + d[g - 1][h][1];
				d[g][h][1] = (!s[g - 1][h] && !s[g][h - 1]) ? d[g - 1][h - 1][0] + d[g - 1][h - 1][1] + d[g - 1][h - 1][2] : 0;
				d[g][h][2] = d[g][h - 1][1] + d[g][h - 1][2] + d[g][h][2];
			}
	printf("%d", d[a][a][0] + d[a][a][1] + d[a][a][2]);
}
