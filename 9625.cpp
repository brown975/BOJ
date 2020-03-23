#include <stdio.h>
long long s, d[45] = { 0, 1 };
int main() {
	for (int g = 2; g < 46; g++)
		d[g] = d[g - 1] + d[g - 2];
	scanf("%lld", &s);
	printf("%lld %lld", d[s - 1], d[s]);
}
