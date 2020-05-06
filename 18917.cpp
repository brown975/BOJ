#include <stdio.h>
long long a, s, d, e, r;
int main() {
	scanf("%lld", &a);
	while (a--) {
		scanf("%lld", &e);
		if (e < 3) {
			scanf("%lld", &r);
			s += e - 1 ? -r : r;
			d ^= r;
		}
		else
			printf("%lld\n", e - 3 ? d : s);
	}
}
