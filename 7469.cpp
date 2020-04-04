#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
int a, s;
vector<int> d[400005];
void asd(int q, int w, int e, int r, int t) {
	if (q > r || q < e)
		return;
	if (e == r) {
		d[t].push_back(w);
		return;
	}
	d[t].push_back(w);
	asd(q, w, e, (e + r) / 2, t * 2);
	asd(q, w, (e + r) / 2 + 1, r, t * 2 + 1);
}
int asdf(int q, int w, int e, int r, int t, int y) {
	if (q > r || w < e)
		return 0;
	if (q <= e && r <= w)
		return upper_bound(d[t].begin(), d[t].end(), y) - d[t].begin();
	return asdf(q, w, e, (e + r) / 2, t * 2, y) + asdf(q, w, (e + r) / 2 + 1, r, t * 2 + 1, y);
}
int main() {
	scanf("%d%d", &a, &s);
	for (int g = 0, e; g < a; g++) {
		scanf("%d", &e);
		asd(g, e, 0, a - 1, 1);
	}
	for (int g = 0; g <= 4 * a; g++)
		sort(d[g].begin(), d[g].end());
	for (int g = 0, w, e, r; g < s; g++) {
		scanf("%d%d%d", &w, &e, &r);
		int c = -1000000000, v = 1000000000;
		while (c <= v)
			if (asdf(w - 1, e - 1, 0, a - 1, 1, (c + v) / 2) < r)
				c = (c + v) / 2 + 1;
			else
				v = (c + v) / 2 - 1;
		printf("%d\n", c);
	}
}
