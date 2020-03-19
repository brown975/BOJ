#include <stdio.h>
#include <algorithm>
using namespace std;
int a, s[30][30], d[30][30], f[320] = { 0 }, w = 0;
void asdf(int e, int r) {
	f[w]++;
	d[e][r] = 1;
	if ((e < a) && s[e + 1][r] && !d[e + 1][r])
		asdf(e + 1, r);
	if ((r < a) && s[e][r + 1] && !d[e][r + 1])
		asdf(e, r + 1);
	if (e && s[e - 1][r] && !d[e - 1][r])
		asdf(e - 1, r);
	if (r && s[e][r - 1] && !d[e][r - 1])
		asdf(e, r - 1);
}
int main() {
	scanf("%d", &a);
	for (int g = 0; g < a; g++)
		for (int h = 0; h < a; h++)
			scanf("%1d", &s[g][h]);
	for (int g = 0; g < a; g++)
		for (int h = 0; h < a; h++)
			if (s[g][h] & !d[g][h]) {
				asdf(g, h);
				w++;
			}
	sort(f, f + w);
	printf("%d\n", w);
	for (int g = 0; g < w; g++)
		printf("%d ", f[g]);
}
