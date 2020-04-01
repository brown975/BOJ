#include <stdio.h>
#include <string.h>
#include <vector>
using namespace std;
int a, s, d[5005], f = 0, r[5005];
vector<vector<int>> t;
bool asdf(int e) {
	if (d[e])
		return 0;
	d[e] = 1;
	for (int g = 0, w; g < t[e].size(); g++) {
		w = t[e][g];
		if (!r[w] || asdf(r[w])) {
			r[w] = e;
			return 1;
		}
	}
	return 0;
}
int main() {
	scanf("%d%d", &a, &s);
	t.resize(a + 1);
	for (int g = 1, e, r; g <= s; g++) {
		scanf("%d%d", &e, &r);
		t[e].push_back(r);
	}
	for (int g = 1; g <= a; g++) {
		memset(d, 0, sizeof(d));
		if (asdf(g))
			f++;
	}
	printf("%d", f);
}
