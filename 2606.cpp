#include <stdio.h>
#include <vector>
#include <queue>
using namespace std;
int s, d, f[1001][1001], t[1001], w = 0;
vector<int> u;
void asdf(int a) {
	t[a] = 1;
	u.push_back(a);
	for (int g = 1; g <= s; g++) {
		if (f[a][g])
			if (!t[g]) {
				asdf(g);
				w++;
			}
	}
}
int main() {
	scanf("%d%d", &s, &d);
	for (int g = 0, e, r; g < d; f[e][r] = f[r][e] = 1, g++)
		scanf("%d%d", &e, &r);
	asdf(1);
	printf("%d", w);
}
