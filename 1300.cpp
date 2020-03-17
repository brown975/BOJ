#include <stdio.h>
#include <algorithm>
using namespace std;
typedef long long ll;
ll a, s;
ll asdf(ll f) {
	ll d = 0;
	for (int g = 1; g <= a; g++) {
		d += min(a, f / g);
		if (g > f)
			break;
	}
	return d;
}
int main() {
	scanf("%lld%lld", &a, &s);
	ll e = 0, r = a * a;
	while (r - e)
		if (asdf((e + r) / 2 + 1) >= s)
			r = (e + r) / 2;
		else
			e = (e + r) / 2 + 1;
	printf("%lld", e + 1);
}
