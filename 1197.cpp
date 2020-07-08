#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
pair<pair<int, int>, int> d[100005];
int a, s;
int f[10005];
int as(int e) {
	if (e == f[e])
		return e;
	return f[e] = as(f[e]);
}
bool asdf(pair<pair<int, int>, int> e, pair<pair<int, int>, int> r) {
	return e.second < r.second;
}
void asd(int e, int r) {
	e = as(e), r = as(r);
	if (e > r)
		swap(e, r);
	if (e == r)
		return;
	f[e] = r;
}
int main() {
	scanf("%d %d", &a, &s);
	for (int g = 1; g <= s; g++)
		scanf("%d %d %d", &d[g].first.first, &d[g].first.second, &d[g].second);
	sort(d + 1, d + s + 1, asdf);
	long long ans = 0;
	for (int g = 1; g <= a; g++)
		f[g] = g;
	for (int g = 1, e, r; g <= s; g++) {
		e = as(d[g].first.first), r = as(d[g].first.second);
		if (f[e] == f[r])
			continue;
		asd(e, r);
		ans += d[g].second;
	}
	printf("%lld", ans);
}
