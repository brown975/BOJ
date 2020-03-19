#include <stdio.h>
#include <string.h>
int a, s, d[505][505], f[505][505], q[4] = { -1,0,1,0 }, w[4] = { 0,1,0,-1 };
int asdf(int e, int r) {	
	if (f[e][r] + 1)
		return f[e][r];
	if (!e | (e > a) | !r | (r > s))
		return 0;
	if ((e == 1) & (r == 1))
		return 1;
	f[e][r] = 0;
	for (int g = 0; g < 4; g++)
		if (d[e + q[g]][r + w[g]] > d[e][r])
			f[e][r] += asdf(e + q[g], r + w[g]);
	return f[e][r];
}
int main() {
	scanf("%d%d", &a, &s);
	for (int g = 1; g <= a; g++)
		for (int h = 1; h <= s; h++)
			scanf("%d", &d[g][h]);
	memset(f, -1, sizeof(f));
	printf("%d", asdf(a, s));
}
