#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
char a[105], s[105], d[105];
int f[105][105][105];
int main() {
	scanf("%s%s%s", a, s, d);
	for (int g = 1; g <= strlen(a); g++)
		for (int h = 1; h <= strlen(s); h++)
			for (int j = 1; j <= strlen(d); j++)
				if (a[g - 1] == s[h - 1] && s[h - 1] == d[j - 1])
					f[g][h][j] = f[g - 1][h - 1][j - 1] + 1;
				else
					f[g][h][j] = max(f[g - 1][h][j], max(f[g][h - 1][j], f[g][h][j - 1]));
	printf("%d", f[strlen(a)][strlen(s)][strlen(d)]);
}
