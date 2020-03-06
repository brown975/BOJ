#include <stdio.h>
typedef long long ll;
ll a, s, d;
ll pow(ll e, ll r) {
	ll w = 1;
	while (r > 0) {
		if (r % 2) {
			w *= e;
			w %= d;
		}
		e *= e;
		e %= d;
		r /= 2;
	}
	return w;
}
int main() {
	scanf("%lld%lld%lld", &a, &s, &d);
	printf("%lld", pow(a % d, s));
}
