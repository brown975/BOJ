#include <stdio.h>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;
pair<int, int> a[8001];
long long s, d, f = 0;
vector<int> w;
bool asdf(pair<int, int> e, pair<int, int> r) {
	if (e.first < r.first)
		return true;
	if (e.first == r.first && e.second > r.second)
		return true;
	return false;
}
int main(void) {
	scanf("%lld", &s);
	w.resize(s);
	for (int g = 0; g < 8001; g++)
		a[g].second = g - 4000;
	for (int g = 0; g < s; g++) {
		scanf("%d", &w[g]);
		f += w[g];
		a[w[g] + 4000].first++;
	}
	sort(w.begin(), w.end());
	sort(a, a + 8001, asdf);
	d = (a[8000].first - a[7999].first) ? a[8000].second : a[7999].second;
	printf("%.0f\n%d\n%lld\n%d\n", round(f / (double)s), w[s / 2], d, w[w.size() - 1] - w[0]);
}
