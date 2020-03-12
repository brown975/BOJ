#include <stdio.h>
long long a, s, d;
int main() {
	scanf("%lld", &a);
	while (a--) {
		scanf("%lld%lld", &s, &d);
		long long f = d - s, g = 0;
		while (++g) {
			if (f <= g * g) {
				printf("%lld\n", g * 2 - 1);
				break;
			}
			if (f <= g * g + g) {
				printf("%lld\n", g * 2);
				break;
			}
		}
	}
}
