#include <stdio.h>
#include <algorithm>
#include <set>
using namespace std;
typedef long long ll;
ll a;
multiset<ll> s, d;
ll as(ll e, ll r) {
	for (; r; e %= r, swap(e, r));
	return e;
}
ll ad(ll w, ll e, ll r) {
	ll q = 0, t = w % r;
	while (e) {
		if (e % 2 == 1)
			q = (q + t) % r;
		t = (t * 2) % r;
		e /= 2;
	}
	return q % r;
}
ll asd(ll e) {
	ll q = 2, w = 2, t = 1, r = 0;
	while (t == 1 && r < 70000) {
		r++;
		q = (ad(q, q, e) + 3) % e;
		w = (ad(w, w, e) + 3) % e;
		w = (ad(w, w, e) + 3) % e;
		t = as(abs(w - q), e);
	}
	if (t == e)
		return e;
	if (t == 1)
		return e;
	return t;
}
ll asf(ll e) {
	ll q = 2, w = 2, t = 1, r = 0;
	while (t == 1 && r < 70000) {
		r++;
		q = (ad(q, q, e) + 17) % e;
		w = (ad(w, w, e) + 17) % e;
		w = (ad(w, w, e) + 17) % e;
		t = as(abs(w - q), e);
	}
	if (t == e)
		return e;
	if (t == 1)
		return e;
	return t;
}
int main() {
	scanf("%lld", &a);
	if (a == 1)
		return 0;
	for (int g = 2; g < 10000000 && (a - 1); g++)
		while (!(a % g)) {
			s.insert(g);
			a /= g;
		}
	if (a != 1) {
		d.insert(a);
		while (!d.empty()) {
			auto f = d.end();
			f--;
			ll e = *f, r;
			d.erase(f);
			r = asf(e);
			if (e == r) {
				r = asd(e);
				if (e == r)
					s.insert(r);
				else {
					d.insert(r);
					d.insert(e / r);
				}
			}
			else {
				d.insert(r);
				d.insert(e / r);
			}
		}
	}
	for (auto g : s)
		printf("%lld\n", g);
}
