#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
int a, s[102][102], d, f, t[102][102];
void asdf(int w, int e, int r) {
	t[e][r] = 0;
	if (t[e][r + 1] > w)
		asdf(w, e, r + 1);
	if (t[e][r - 1] > w)
		asdf(w, e, r - 1);
	if (t[e + 1][r] > w)
		asdf(w, e + 1, r);
	if (t[e - 1][r] > w)
		asdf(w, e - 1, r);
}
int main() {
	scanf("%d", &a);
	for (int g = 1; g <= a; g++)
		for (int h = 1; h <= a; h++)
			scanf("%d", &s[g][h]);
	for (int g = 0; g < 101; f = max(d, f), d = 0, g++) {
		memcpy(t, s, sizeof(s));
		for (int h = 1; h <= a; h++)
			for (int j = 1; j <= a; j++)
				if (t[h][j] > g) {
					d++;
					asdf(g, h, j);
				}
	}
	printf("%d", f);
}
