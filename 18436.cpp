#include <stdio.h>
#include <algorithm>
using namespace std;
typedef long long ll;
ll a, s, d[100002], f[300002];
ll asdf(ll t, ll e, ll r) {
	if (e == r)
		return f[t] = d[e] % 2;
	else
		return f[t] = asdf(t * 2, e, (e + r) / 2) + asdf(t * 2 + 1, (e + r) / 2 + 1, r);
}
ll asf(ll t, ll q, ll w, ll e, ll r) {
	if (r < q || w < e)
		return 0;
	if (q <= e && r <= w)
		return f[t];
	return asf(t * 2, q, w, e, (e + r) / 2) + asf(t * 2 + 1, q, w, (e + r) / 2 + 1, r);
}
ll af(ll t, ll q, ll w, ll e, ll r) {
	if (e <= q && q <= r) {
		if (e == r)
			f[t] = w % 2;
		else
			f[t] = af(t * 2, q, w, e, (e + r) / 2) + af(t * 2 + 1, q, w, (e + r) / 2 + 1, r);
	}
	return f[t];
}
int main() {
	scanf("%lld", &a);
	for (ll g = 1; g <= a; g++)
		scanf("%lld", &d[g]);
	asdf(1, 1, a);
	scanf("%lld", &s);
	for (ll g = 0, w, e, r; g < s; g++) {
		scanf("%lld%lld%lld", &w, &e, &r);
		if (w == 1)
			af(1, e, r, 1, a);
		if (w == 2)
			printf("%lld\n", r - e - asf(1, e, r, 1, a) + 1);
		if (w == 3)
			printf("%lld\n", asf(1, e, r, 1, a));
	}
}
