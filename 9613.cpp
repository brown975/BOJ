#include <stdio.h>
long long a, s, d[105], f;
long long asdf(long long e, long long r) {
	return r ? asdf(r, e % r) : e;
}
int main() {
	scanf("%lld", &a);
	while (a--) {
		f = 0;
		scanf("%lld", &s);
		for (long long g = 0; g < s; g++)
			scanf("%lld", &d[g]);
		for (long long g = 0; g < s; g++)
			for (long long h = g + 1; h < s; h++)
				f += asdf(d[g], d[h]);
		printf("%lld\n", f);
	}
}
