#include <stdio.h>
#include <map>
using namespace std;
long long a;
map<long long, long long> s;
long long asdf(long long e) {
	long long d, f;
	if (e <= 0)
		return 0;
	if (e == 1 || e == 2)
		return 1;
	if (s.count(e))
		return s[e];
	if (e % 2) {
		d = asdf(e / 2 + 1), f = asdf(e / 2);
		return s[e] = (d * d + f * f) % 1000000007;
	}
	else {
		d = asdf(e / 2 - 1), f = asdf(e / 2);
		return s[e] = ((2 * d + f) * f) % 1000000007;
	}
}
int main() {
	scanf("%lld", &a);
	printf("%lld", asdf(a));
}
