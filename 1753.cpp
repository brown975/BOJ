#include <stdio.h>
#include <vector>
#include <queue>
using namespace std;
int a, s, d, f, q, w, e, r, t, y;
vector<vector<pair<int, int>>> l;
vector<int> v;
priority_queue<pair<int, int>> h;
int main(void) {
	scanf("%d%d%d", &a, &s, &d);
	l.resize(a + 1);
	v.resize(a + 1);
	while (s--) {
		scanf("%d%d%d", &f, &q, &w);
		l[f].push_back({ w,q });
	}
	for (int g = 1; g <= a; g++) {
		v[g] = 999999999;
	}
	v[d] = 0;
	h.push({ 0, d });
	while (!h.empty()) {
		e = -h.top().first;
		r = h.top().second;
		h.pop();
		for (int g = 0; g < l[r].size(); g++) {
			t = l[r][g].second;
			y = l[r][g].first;
			if (y + e < v[t]) {
				v[t] = y + e;
				h.push({ -v[t],t });
			}
		}
	}
	for (int g = 1; g <= a; g++) {
		if (v[g] == 999999999) {
			printf("INF\n");
			continue;
		}
		printf("%d\n", v[g]);
	}
}
