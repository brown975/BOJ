#include <stdio.h>
#include <vector>
#include <string.h>
using namespace std;
vector<int> d[205];
int v[205], c[205], f[205];
bool asdf(int e) {
	f[e] = 1;
	for (int g = 0; g < d[e].size(); g++)
		if (c[d[e][g]] == -1 || !f[c[d[e][g]]] && asdf(c[d[e][g]])) {
			v[e] = d[e][g];
			c[d[e][g]] = e;
			return 1;
		}
	return 0;
}
int main() {
	int a, s;
	scanf("%d%d", &a, &s);
	for (int g = 1, e; g <= a; g++) {
		scanf("%d", &e);
		for (int h = 0, r; h < e; d[g].push_back(r), h++)
			scanf("%d", &r);
	}
	memset(v, -1, sizeof(v));
	memset(c, -1, sizeof(c));
	int t = 0;
	for (int g = 1; g <= a; g++)
		if (v[g] == -1) {
			memset(f, false, sizeof(f));
			if (asdf(g))
				t++;
		}
	printf("%d", t);
}
