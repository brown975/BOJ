#include <stdio.h>
#include <queue>
using namespace std;
int a, s, d, f, t[1005];
vector<pair<int, int>> v[1005];
priority_queue<pair<int, int>> y;
int main() {
	scanf("%d%d", &a, &s);
	for (int g = 0, w, e, r; g < s; v[w].push_back({ e,r }), g++)
		scanf("%d%d%d", &w, &e, &r);
	scanf("%d%d", &d, &f);
	for (int g = 1; g <= a; g++)
		t[g] = 2000000000;
	t[d] = 0;
	y.push({ 0,d });
	while (!y.empty()) {
		int e = -y.top().first, r = y.top().second;
		y.pop();
		for (int g = 0; g < v[r].size(); g++)
			if (t[v[r][g].first] > e + v[r][g].second) {
				t[v[r][g].first] = e + v[r][g].second;
				y.push({ -t[v[r][g].first], v[r][g].first });
			}
	}
	printf("%d", t[f]);
}
