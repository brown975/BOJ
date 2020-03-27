#include <stdio.h>
long long a, s[105], d[105][30];
int main() {
	scanf("%lld", &a);
	for (int g = 0; g < a; g++)
		scanf("%lld", &s[g]);
	d[0][s[0]] = 1;
	for (int g = 1; g < a - 1; g++) {
		for (int h = 0; h <= 20 - s[g]; h++)
			d[g][h] += d[g - 1][h + s[g]];
		for (int h = s[g]; h <= 20; h++)
			d[g][h] += d[g - 1][h - s[g]];
	}
	printf("%lld", d[a - 2][s[a - 1]]);
}
