#include <stdio.h>
#include <string.h>
int s[2505], d, f[2505][2505];
char a[2505];
int main() {
	scanf("%s", a);
	d = strlen(a);
	for (int g = 1; g <= d; g++)
		f[g][g] = 1;
	for (int g = 1; g <= d - 1; g++)
		if (a[g - 1] == a[g])
			f[g][g + 1] = 1;
	for (int g = 2; g <= d - 1; g++)
		for (int h = 1; g + h <= d; h++)
			if ((a[h - 1] == a[g + h - 1]) && f[h + 1][g + h - 1])
				f[h][g + h] = 1;
	for (int g = 1; g <= d; g++) {
		if (!s[g] || ((s[g] > s[g - 1] + 1) && s[g]))
			s[g] = s[g - 1] + 1;
		for (int h = g + 1; h <= d; h++)
			if (f[g][h] && (!s[h] || ((s[h] > s[g - 1] + 1) && s[h])))
				s[h] = s[g - 1] + 1;
	}
	printf("%d", s[d]);
}
