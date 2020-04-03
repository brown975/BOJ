#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
int a, s, d[205], f[205][205];
int asdf(int e, int r) {
	if (e == r)
		return 0;
	if (f[e][r] + 1)
		return f[e][r];
	f[e][r] = 2000000000;
	for (int g = e; g < r; g++)
		f[e][r] = min(f[e][r], asdf(e, g) + asdf(g + 1, r) + ((d[e] - d[g + 1]) ? 1 : 0));
	return f[e][r];
}
int main() {
	scanf("%d%d", &a, &s);
	for (int g = 1; g <= a; g++)
		scanf("%d", &d[g]);
	memset(f, -1, sizeof(f));
	printf("%d", asdf(1, a));
}
