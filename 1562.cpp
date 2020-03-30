#include <stdio.h>
int a, s[105][10][1030], d = 0;
int main() {
	for (int g = 1; g <= 9; g++)
		s[1][g][1 << (9 - g)] = 1;
	scanf("%d", &a);
	for (int g = 2; g <= a; g++) {
		for (int h = 0; h <= 9; h++) {
			for (int j = 1; j < 1024; j++) {
				if (!(j & (1 << (9 - h))))
					continue;
				if (h) {
					s[g][h][j] = (s[g][h][j] + s[g - 1][h - 1][j]) % 1000000000;
					s[g][h][j] = (s[g][h][j] + s[g - 1][h - 1][j ^ 1 << (9 - h)]) % 1000000000;
				}
				if (h - 9) {
					s[g][h][j] = (s[g][h][j] + s[g - 1][h + 1][j]) % 1000000000;
					s[g][h][j] = (s[g][h][j] + s[g - 1][h + 1][j ^ 1 << (9 - h)]) % 1000000000;
				}
			}
		}
	}
	for (int g = 0; g <= 9; g++)
		d = (d + s[a][g][1023]) % 1000000000;
	printf("%d", d);
}
