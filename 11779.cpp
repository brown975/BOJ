#include <stdio.h>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
struct asd {
	int c, v;
	asd(int c, int v) : c(c), v(v) {}
	bool operator <(asd A)const { return v > A.v; }
};
int a, s, d[1003], f[1003], t, y;
vector<int> b;
vector<asd> n[1003];
int main() {
	scanf("%d%d", &a, &s);
	for (int g = 0, w, e, r; g < s; g++) {
		scanf("%d%d%d", &w, &e, &r);
		n[w].push_back(asd(e, r));
	}
	scanf("%d%d", &t, &y);
	for (int g = 1; g <= a; g++) f[g] = 1000000000;
	f[t] = 0;
	priority_queue<asd> z;
	z.push(asd(t, f[t]));
	while (!z.empty()) {
		asd now = z.top();
		z.pop();
		if (now.c == y)
			break;
		if (now.v != f[now.c])
			continue;
		for (auto x : n[now.c]) {
			if (f[x.c] > now.v + x.v) {
				f[x.c] = now.v + x.v;
				d[x.c] = now.c;
				z.push(asd(x.c, f[x.c]));
			}
		}
	}
	int t = y;
	while (t) {
		b.push_back(t);
		t = d[t];
	}
	printf("%d\n%d\n", f[y], b.size());
	for (int g = b.size() - 1; g >= 0; g--)
		printf("%d ", b[g]);
}
