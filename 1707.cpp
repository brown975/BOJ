#include <stdio.h>
#include <vector>
using namespace std;
int a, s, d, w[20005], t;
vector<int> f[20005];
bool dfs(int e, int r) {
	w[e] = r;
	for (int g = 0; g < f[e].size(); g++)
		if ((!w[f[e][g]] && !dfs(f[e][g], -r)) || (w[f[e][g]] == w[e] && w[f[e][g]]))
			return 0;
	return 1;
}
int main() {
	scanf("%d", &a);
	while (a--) {
		t = 1;
		scanf("%d%d", &s, &d);
		for (int g = 1; g <= s; f[g].clear(), w[g] = 0, g++);
		for (int g = 0, e, r; g < d; f[e].push_back(r), f[r].push_back(e), g++)
			scanf("%d%d", &e, &r);
		for (int g = 1; g <= s; g++)
			if (!w[g] && !dfs(g, 1)) {
				t = 0;
				break;
			}
		printf(t ? "YES\n" : "NO\n");
	}
}
