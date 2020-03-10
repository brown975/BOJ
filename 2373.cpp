#include <stdio.h>
long long a[30] = { 1, 1 }, s, d = 29, f = 0;
int main(void) {
	scanf("%lld", &s);
	for (int g = 2; g < 30; g++) {
		a[g] = a[g - 1] + a[g - 2];
	}
	while (s) {
		if (a[d] > s)
			d--;
		else {
			if (a[d] == s) {
				if (!f) {
					printf("-1");
					return 0;
				}
				printf("%lld", a[d]);
				return 0;
			}
			else {
				f = 1;
				s -= a[d];
			}
		}
	}
}
