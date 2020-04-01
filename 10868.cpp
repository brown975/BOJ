#include <stdio.h>
#include <algorithm>
using namespace std;
typedef long long ll;
ll a, s, d[100002], c[300002];
ll asdc(ll t, ll e, ll r) {
	if (e == r)
		return c[t] = d[e];
	else
		return c[t] = min(asdc(t * 2, e, (e + r) / 2), asdc(t * 2 + 1, (e + r) / 2 + 1, r));
}
ll asc(ll t, ll q, ll w, ll e, ll r) {
	if (r < q || w < e)
		return 2000000000;
	if (q <= e && r <= w)
		return c[t];
	return min(asc(t * 2, q, w, e, (e + r) / 2), asc(t * 2 + 1, q, w, (e + r) / 2 + 1, r));
}
int main() {
	scanf("%lld%lld", &a, &s);
	for (ll g = 1; g <= a; g++)
		scanf("%lld", &d[g]);
	asdc(1, 1, a);
	for (ll g = 0, e, r; g < s; g++) {
		scanf("%lld%lld", &e, &r);
		printf("%lld\n", asc(1, e, r, 1, a));
	}
}
