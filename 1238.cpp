#include <stdio.h>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
int a, s, d, t = -1;
vector<pair<int, int>> f[1005];
vector<int> asdf(int e, int r) {
	vector<int> w(r, 2000000000);
	w[e] = 0;
	priority_queue<pair<int, int>> q;
	q.push({ 0, -e });
	while (!q.empty()) {
		int c = -q.top().first, v = -q.top().second;
		q.pop();
		if (w[v] >= c)
			for (int g = 0; g < f[v].size(); g++)
				if (w[f[v][g].first] > c + f[v][g].second) {
					w[f[v][g].first] = c + f[v][g].second;
					q.push({ -c - f[v][g].second, -f[v][g].first });
				}
	}
	return w;
}
int main() {
	scanf("%d%d%d", &a, &s, &d);
	for (int g = 0, w, e, r; g < s; f[w].push_back({ e, r }), g++)
		scanf("%d%d%d", &w, &e, &r);
	for (int g = 1; g <= a; g++) {
		vector<int> e = asdf(g, a + 1), r = asdf(d, a + 1);
		if (e[d] + r[g] < 2000000000 && e[d] + r[g] >= 0)
			t = max(t, e[d] + r[g]);
	}
	printf("%d", t);
}
