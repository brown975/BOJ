#include <stdio.h>
#include <vector>
using namespace std;
int a, s, f[1005];
vector<int> d[1005], t;
void asdf(int e) {
	f[e] = -1;
	t.push_back(e);
	for (int g : d[e])
		if (!--f[g])
			asdf(g);
}
int main() {
	scanf("%d%d", &a, &s);
	while (s--) {
		int w, e, r;
		scanf("%d%d", &w, &e);
		while (--w) {
			scanf("%d", &r);
			d[e].push_back(r);
			f[r]++;
			e = r;
		}
	}
	for (int g = 1; g <= a; g++)
		if (!f[g])
			asdf(g);
	if (t.size() < a)
		puts("0");
	else
		for (int g : t)
			printf("%d\n", g);
}
