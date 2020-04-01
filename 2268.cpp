#include <stdio.h>
#include <algorithm>
using namespace std;
typedef long long ll;
ll a, s, d[1000005] = { 0 }, f[1000005];
void as(ll e, ll r) {
	for (ll g = e; g <= a; g += (g & -g))
		f[g] += r;
}
ll asdf(ll e) {
	ll t = 0;
	for (ll g = e; g; g -= (g & -g))
		t += f[g];
	return t;
}
int main() {
	scanf("%lld%lld", &a, &s);
	for (ll g = 0, w, e, r; g < s; g++) {
		scanf("%lld%lld%lld", &w, &e, &r);
		if (w == 1) {
			as(e, r - d[e]);
			d[e] = r;
		}
		else {
			if (e > r)
				swap(e, r);
			printf("%lld\n", asdf(r) - asdf(e - 1));
		}
	}
}
