#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
int a, s, d, f[105], t[105][105], v;
int main() {
	memset(t, 10000, sizeof(t));
	scanf("%d%d%d", &a, &s, &d);
	for (int g = 1; g <= a; g++)
		scanf("%d", &f[g]);
	for (int g = 0, w, e, r; g < d; t[w][e] = min(t[w][e], r), t[e][w] = min(t[e][w], r), g++)
		scanf("%d%d%d", &w, &e, &r);
	for (int g = 1; g <= a; g++)
		for (int h = 1; h <= a; h++)
			for (int j = 1; j <= a; t[h][j] = min(t[h][j], t[h][g] + t[g][j]), j++)
				if (h == j)
					t[h][j] = 0;
	for (int g = 1, e = 0; g <= a; v = max(v, e), e = 0, g++)
		for (int h = 1; h <= a; h++)
			if (t[g][h] <= s)
				e += f[h];
	printf("%d", v);
}
