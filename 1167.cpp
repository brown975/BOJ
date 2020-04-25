#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;
int a, f = 0, d[100003];
vector<pair<int, int>> s[100003];
int asdf(int w) {
	int e = 0, r = 0;
	for (auto g : s[w]) {
		if (d[g.first])
			continue;
		d[g.first] = 1;
		int q = asdf(g.first) + g.second;
		if (q > e) {
			r = e;
			e = q;
		}
		else if (q > r)
			r = q;
	}
	f = max(f, e + r);
	return e;
}
int main() {
	scanf("%d", &a);
	for (int g = 0, w, e, r; g < a; g++) {
		scanf("%d", &w);
		while (1) {
			scanf("%d", &e);
			if (e == -1)
				break;
			scanf("%d", &r);
			s[w].push_back({ e,r });
		}
	}
	d[1] = 1;
	asdf(1);
	printf("%d", f);
}
