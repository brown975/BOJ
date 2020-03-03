#include <stdio.h>
typedef long long lll;
lll a, s, d[1000005] = { 0 , 0 };
lll min(lll e, lll r) {
	return (e < r) ? e : r;
}
int main() {
	scanf("%lld", &a);
	for (int g = 2; g <= a; g++) {
		d[g] = 900000000000000;
		if (!(g % 3))
			d[g] = d[g / 3];
		if (!(g % 2))
			d[g] = min(d[g / 2], d[g]);
		d[g] = min(d[g - 1], d[g]);
		d[g]++;
	}
	printf("%lld", d[a]);
}
