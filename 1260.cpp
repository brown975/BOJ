#include <stdio.h>
#include <vector>
#include <queue>
using namespace std;
int s, d, f, e, r, w[1001][1001], t[1001];
int i[1001];
vector<int> u;
vector<int> m;
queue<int> v;
void asdf(int a) {
	t[a] = 1;
	u.push_back(a);
	for (int g = 1; g <= s; g++) {
		if (w[a][g] == 1) {
			if (t[g] == 0) {
				asdf(g);
			}
		}
	}
}
int main(void) {
	scanf("%d%d%d", &s, &d, &f);
	for (int g = 0; g<d; g++) {
		scanf("%d%d", &e, &r);
		w[e][r] = 1;
		w[r][e] = 1;
	}
	asdf(f);
	for (int g = 0; g < u.size(); g++) {
		printf("%d ", u[g]);
	}
	printf("\n");
	v.push(f);
	i[f] = 1;
	while (v.empty()==false) {
		int o = v.front();
		printf("%d ", o);
		v.pop();
		for (int p = 1; p <= s; p++) {
			if (w[o][p] == 1) {
				if (i[p] == 0) {
					i[p] = 1;
					v.push(p);
				}
			}
		}
	}
}
