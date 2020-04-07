#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <vector>
using namespace std;
typedef long long ll;
struct asf {
	ll w, e, r;
	bool operator<(const asf& A)const {
		return w < A.w;
	}
};
ll a, f;
vector<ll> d;
pair<pair<ll, ll>, pair<ll, ll>> v[12005];
asf s[3005];
void asdf(ll q, ll w, ll t, ll e, ll r) {
	if (r < q || q < e)
		return;
	if (e == r) {
		v[t].second.first += w;
		v[t].first.first += w;
		v[t].first.second += w;
		v[t].second.second += w;
		return;
	}
	asdf(q, w, t * 2, e, (e + r) / 2);
	asdf(q, w, t * 2 + 1, (e + r) / 2 + 1, r);
	v[t].first.first = max(v[t * 2].first.first, v[t * 2].second.first + v[t * 2 + 1].first.first);
	v[t].first.second = max(v[t * 2 + 1].first.second, v[t * 2 + 1].second.first + v[t * 2].first.second);
	v[t].second.first = v[t * 2].second.first + v[t * 2 + 1].second.first;
	v[t].second.second = max(max(v[t * 2].first.second + v[t * 2 + 1].first.first, v[t * 2].second.second), max(v[t * 2 + 1].second.second, max(v[t].first.first, v[t].first.second)));
}
ll asd(ll q, ll w, ll t, ll e, ll r) {
	if (r < q || w < e)
		return 0;
	if (q <= e && r <= w)
		return v[t].second.second;
	return max(asd(q, w, t * 2, e, (e + r) / 2), asd(q, w, t * 2 + 1, (e + r) / 2 + 1, r));
}
int main() {
	scanf("%lld", &a);
	for (ll g = 0, w, q, r; g < a; g++) {
		scanf("%lld%lld%lld", &w, &q, &r);
		s[g] = { w,q,r };
		d.push_back(q);
	}
	sort(s, s + a);
	sort(d.begin(), d.end());
	d.erase(unique(d.begin(), d.end()), d.end());
	for (ll g = 0, t = d.size(); g < a; g++) {
		memset(v, 0, sizeof(v));
		if (g && s[g].w == s[g - 1].w)
			continue;
		for (ll h = g, q, r; h < a; h++) {
			q = lower_bound(d.begin(), d.end(), s[h].e) - d.begin();
			asdf(q, s[h].r, 1, 0, t - 1);
			if ((h - a + 1) && s[h].w == s[h + 1].w)
				continue;
			r = asd(0, t - 1, 1, 0, t - 1);
			f = max(r, f);
		}
	}
	printf("%lld", f);
}
