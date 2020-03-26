#include <stdio.h>
#include <string.h>
int a, s, d[205][205];
int asdf(int e, int r) {
	if (r == 1)
		return 1;
	if (d[e][r] + 1)
		return d[e][r];
	int f = 0;
	for (int g = 0; g <= e; g++)
		f = (f + asdf(e - g, r - 1)) % 1000000000;
	return d[e][r] = f;
}
int main() {
	memset(d, -1, sizeof(d));
	scanf("%d%d", &a, &s);
	printf("%d", asdf(a, s));
}
