#include <cstdio>
#include <algorithm>
#include <queue>
using namespace std;
int a, s, f[11][11][11][11], q, w, e, r;
char d[11][11];
int c[] = { 0,0,1,-1 };
int v[] = { 1,-1,0,0 };
int asdf() {
	queue<pair<pair<int, int>, pair<int, int>>> y;
	y.push({ {e,r},{q,w} });
	f[e][r][q][w] = 1;
	int t = 0;
	while (y.size()) {
		int u = y.size();
		while (u--) {
			auto z = y.front();
			y.pop();
			if (d[z.first.first][z.first.second] == 'O' && d[z.first.first][z.first.second] - d[z.second.first][z.second.second])
				return 1;
			for (int g = 0; g < 4; g++) {
				auto x = z;
				while (d[x.first.first + c[g]][x.first.second + v[g]] - '#' && d[x.first.first][x.first.second] - 'O') {
					x.first.first += c[g];
					x.first.second += v[g];
				}
				while (d[x.second.first + c[g]][x.second.second + v[g]] - '#' && d[x.second.first][x.second.second] - 'O') {
					x.second.first += c[g];
					x.second.second += v[g];
				}
				if (x.first.first == x.second.first && x.first.second == x.second.second) {
					if (d[x.first.first][x.first.second] == 'O')
						continue;
					if (abs(x.first.first - z.first.first) + abs(x.first.second - z.first.second) < abs(x.second.first - z.second.first) + abs(x.second.second - z.second.second)) {
						x.second.first -= c[g];
						x.second.second -= v[g];
					}
					else {
						x.first.first -= c[g];
						x.first.second -= v[g];
					}
				}
				if (f[x.first.first][x.first.second][x.second.first][x.second.second])
					continue;
				y.push({ {x.first.first,x.first.second} ,{x.second.first,x.second.second} });
				f[x.first.first][x.first.second][x.second.first][x.second.second] = 1;
			}
		}
		if (t == 10)
			return 0;
		t++;
	}
	return 0;
}
int main() {
	scanf("%d%d", &a, &s);
	for (int g = 0; g < a; g++) {
		scanf("%s", d[g]);
		for (int h = 0; h < s; h++)
			if (d[g][h] == 'B') {
				q = g;
				w = h;
			}
			else if (d[g][h] == 'R') {
				e = g;
				r = h;
			}
	}
	printf("%d", asdf());
}
