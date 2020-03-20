#include <cstdio>
#include <queue>
using namespace std;
int a, s, d, f[101][101][101], t;
queue<pair<int, pair<int, int>>> q;
int main() {
	scanf("%d%d%d", &d, &s, &a);
	for (int g = 0; g < a; g++) {
		for (int h = 0; h < s; h++) {
			for (int j = 0; j < d; j++) {
				scanf("%d", &f[g][h][j]);
				if (f[g][h][j] == 1)
					q.push({ g, {h, j} });
			}
		}
	}
	while (!q.empty()) {
		int w = q.front().first, e = q.front().second.first, r = q.front().second.second;
		q.pop();
		if (w && !f[w - 1][e][r]) {
			f[w - 1][e][r] = f[w][e][r] + 1;
			q.push({ w - 1, {e, r} });
		}
		if (e && !f[w][e - 1][r]) {
			f[w][e - 1][r] = f[w][e][r] + 1;
			q.push({ w, {e - 1, r} });
		}
		if (r && !f[w][e][r - 1]) {
			f[w][e][r - 1] = f[w][e][r] + 1;
			q.push({ w, {e, r - 1} });
		}
		if ((w + 1 < a) && !f[w + 1][e][r]) {
			f[w + 1][e][r] = f[w][e][r] + 1;
			q.push({ w + 1, {e, r} });
		}
		if ((e + 1 < s) && !f[w][e + 1][r]) {
			f[w][e + 1][r] = f[w][e][r] + 1;
			q.push({ w, {e + 1, r} });
		}
		if ((r + 1 < d) && !f[w][e][r + 1]) {
			f[w][e][r + 1] = f[w][e][r] + 1;
			q.push({ w, {e, r + 1} });
		}
	}
	for (int g = 0; g < a; g++) {
		for (int h = 0; h < s; h++) {
			for (int j = 0; j < d; j++) {
				if (!f[g][h][j]) {
					printf("-1");
					return 0;
				}
				if (t < f[g][h][j])
					t = f[g][h][j];
			}
		}
	}
	printf("%d", t - 1);
}
