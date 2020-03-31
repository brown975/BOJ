#include <stdio.h>
typedef long long ll;
ll a, s, d, f[1000005], v[1000005];
void as(ll e, ll r) {
	for (ll g = e; g <= a; g += (g & -g))
	  v[g] += r;
}
ll asdf(ll e) {
	ll t = 0;
	for (ll g = e; g; g -= (g & -g))
		t += v[g];
	return t;
}
int main() {
	scanf("%lld%lld%lld", &a, &s, &d);
	for (ll g = 1; g <= a; as(g, f[g]), g++)
		scanf("%lld", &f[g]);
	for (ll g = 0, w, e, r; g < s + d; g++) {
		scanf("%lld%lld%lld", &w, &e, &r);
		if (w == 1) {
			as(e, r - f[e]);
			f[e] = r;
		}
		else
			printf("%lld\n", asdf(r) - asdf(e - 1));
	}
}
