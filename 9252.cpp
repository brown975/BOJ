#include <stdio.h>
char a[1005], s[1005], q[1005];
int d, f[1005][1005], g, h;
int main() {
	scanf("%s%s", a + 1, s + 1);
	for (g = 1; a[g]; g++) {
		for (h = 1; s[h]; h++) {
			if (a[g] == s[h])
				f[g][h] = f[g - 1][h - 1] + 1;
			else {
				if (f[g - 1][h] < f[g][h - 1])
					f[g][h] = f[g][h - 1];
				else
					f[g][h] = f[g - 1][h];
			}
			if (d < f[g][h])
				d = f[g][h];
		}
	}
	printf("%d\n", d);
	int e = g - 1, r = h - 1, w = 0;
	while (e && r) {
		if (f[e][r] == f[e][r - 1])
			r--;
		else if (f[e][r] == f[e - 1][r])
			e--;
		else {
			q[w++] = a[e];
			e--;
			r--;
		}
	}
	for (int g = w - 1; g + 1; g--)
		printf("%c", q[g]);
}
