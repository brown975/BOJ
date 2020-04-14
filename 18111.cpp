#include <stdio.h>
#include <algorithm>
using namespace std;
int a, s, d, f[505][505], q = 2000000000, w, e = 300000, r, u, i;
int main() {
	scanf("%d%d%d", &a, &s, &d);
	for (int g = 0; g < a; g++)
		for (int h = 0; h < s; e = min(e, f[g][h]), r = max(r, f[g][h]), h++)
			scanf("%d", &f[g][h]);
	for (int g = e, t, y = 0; g <= r; g++) {
		t = y = 0;
		for (int h = 0; h < a; h++)
			for (int j = 0; j < s; j++)
				if (f[h][j] < g) {
					t += g - f[h][j];
					y += g - f[h][j];
				}
				else if (f[h][j] > g) {
					t += (f[h][j] - g) * 2;
					y -= f[h][j] - g;
				}
		if (t <= q && y <= d) {
			q = min(t, q);
			w = max(w, g);
		}
	}
	printf("%d %d", q, w);
}
