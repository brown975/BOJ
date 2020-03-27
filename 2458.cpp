#include <stdio.h>
#include <vector>
#include <string.h>
using namespace std;
int a, s, f, r, e[2][505];
vector<int> d[2][505];
int asdf(int w) {
	int t = 1;
	e[r][w] = 1;
	for (int g : d[r][w])
		if (!e[r][g])
			t += asdf(g);
	return t;
}
int main() {
	scanf("%d%d", &a, &s);
	for (int g = 0, u, v; g < s; d[0][u].push_back(v), d[1][v].push_back(u), g++)
		scanf("%d%d", &u, &v);
	for (int g = 1, u, v; g <= a; g++) {
		memset(e, 0, sizeof(e));
		r = 0;
		u = asdf(g);
		r = 1;
		v = asdf(g);
		if (u + v - 1 == a)
			f++;
	}
	printf("%d", f);
}
