#include <stdio.h>
int a, s, d[105][105], f[105][105];
void asdf(int w, int e, int r) {
	f[e][r] = w;
	if ((e < a) && d[e + 1][r] && ((f[e + 1][r] > w + 1) || !f[e + 1][r]))
		asdf(w + 1, e + 1, r);
	if ((r < s) && d[e][r + 1] && ((f[e][r + 1] > w + 1) || !f[e][r + 1]))
		asdf(w + 1, e, r + 1);
	if (e && d[e - 1][r] && ((f[e - 1][r] > w + 1) || !f[e - 1][r]))
		asdf(w + 1, e - 1, r);
	if (r && d[e][r - 1] && ((f[e][r - 1] > w + 1) || !f[e][r - 1]))
		asdf(w + 1, e, r - 1);
}
int main() {
	scanf("%d%d", &a, &s);
	for (int g = 0; g < a; g++)
		for (int h = 0; h < s; h++)
			scanf("%1d", &d[g][h]);
	asdf(1, 0, 0);
	printf("%d", f[a - 1][s - 1]);
}
