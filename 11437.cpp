#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;
int a, s;
int f[50005], v[50005];
vector<int> d[50005];
void asdf(int e, int r) {
	f[e] = r++;
	for (auto g : d[e])
		if (!f[g]) {
			asdf(g, r);
			v[g] = e;
		}
}
int main() {
	scanf("%d", &a);
	while (--a) {
		int e, r;
		scanf("%d%d", &e, &r);
		d[e].push_back(r);
		d[r].push_back(e);
	}
	asdf(1, 1);
	scanf("%d", &s);
	while (s--) {
		int e, r;
		scanf("%d%d", &e, &r);
		if (f[e] < f[r])
			swap(e, r);
		while (f[e] != f[r])
			e = v[e];
		while (e != r)
			e = v[e], r = v[r];
		printf("%d\n", e);
	}
}
