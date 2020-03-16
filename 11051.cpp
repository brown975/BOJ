#include <stdio.h>
#include <string.h>
int a, s, d[1001][1001];
int asdf(int a, int s) {
	if (!(a - s) | !s)
		return 1;
	if (d[a][s])
		return d[a][s];
	return d[a][s] = (asdf(a - 1, s) + asdf(a - 1, s - 1)) % 10007;
}
int main() {
	memset(d, 0, sizeof(d));
	scanf("%d%d", &a, &s);
	printf("%d", asdf(a, s));
}
