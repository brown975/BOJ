#include <stdio.h>
long long a, s, d[45] = { 0, 1 };
int main() {
	scanf("%lld", &a);
	for (int g = 2; g < 45; g++) {
		d[g] = d[g - 1] + d[g - 2];
	}
	while (a--) {
		scanf("%lld", &s);
		if (!s)
			printf("1 0\n");
		else
			printf("%lld %lld\n", d[s - 1], d[s]);
	}
}
