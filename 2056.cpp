#include <stdio.h>
#include <vector>
#include <queue>
using namespace std;
int c[10005] = { 0 }, a, s[10005], v[10005], t;
queue<int> q;
vector<int> d[10005];
int main() {
	scanf("%d", &a);
	for (int g = 1; g <= a; g++) {
		int e, r;
		scanf("%d%d", &e, &r);
		s[g] = e;
		for (int h = 0, w; h < r; h++) {
			scanf("%d", &w);
			d[w].push_back(g);
			c[g]++;
		}
	}
	for (int g = 1; g <= a; g++)
		if (!c[g]) {
			q.push(g);
			v[g] = s[g];
		}
	while (!q.empty()) {
		int e = q.front();
		q.pop();
		for (int g : d[e]) {
			v[g] = max(v[g], v[e] + s[g]);
			if (!--c[g]) q.push(g);
		}
	}
	for (int g = 1; g <= a; g++)
		t = max(t, v[g]);
	printf("%d", t);
}
