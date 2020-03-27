#include <stdio.h>
#include <queue>
#include <vector>
using namespace std;
int a, s, d, w;
int main() {
	scanf("%d", &a);
	while (a--) {
		scanf("%d%d", &s, &d);
		vector<int> f(s + 1), e(s + 1), r(s + 1);
		vector<vector<int>> v(s + 1);
		queue<int> q;
		for (int g = 1; g <= s; g++)
			scanf("%d", &f[g]);
		for (int g = 0, u, i; g < d; g++) {
			scanf("%d%d", &u, &i);
			v[u].push_back(i);
			r[i]++;
		}
		scanf("%d", &w);
		for (int g = 1; g < s + 1; g++)
			if (!r[g]) {
				q.push(g);
				e[g] = f[g];
			}
		while (!q.empty()) {
			int y = q.front();
			q.pop();
			if (y == w)
				break;
			for (int g : v[y]) {
				if (--r[g] == 0)
					q.push(g);
				if (e[g] < e[y] + f[g])
					e[g] = e[y] + f[g];
			}
		}
		printf("%d\n", e[w]);
	}
}
