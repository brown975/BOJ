#include <stdio.h>
#include <string.h>
#include <queue>
using namespace std;
int a, s, d[105][105], f[105][105], t;
int main() {
	scanf("%d%d", &a, &s);
	for (int g = 0; g < a; g++)
		for (int h = 0; h < s; h++)
			scanf("%d", &d[g][h]);
	while (1) {
		memset(f, false, sizeof(f));
		queue<pair<int, int>> w;
		w.push({ 0, 0 });
		f[0][0] = true;
		while (!w.empty()) {
			int e = w.front().first, r = w.front().second;
			w.pop();
			if (r + 1 < s && !f[e][r + 1]) {
				if (d[e][r + 1])
					d[e][r + 1]++;
				else {
					w.push({ e, r + 1 });
					f[e][r + 1] = true;
				}
			}
			if (r && !f[e][r - 1]) {
				if (d[e][r - 1])
					d[e][r - 1]++;
				else {
					w.push({ e, r - 1 });
					f[e][r - 1] = true;
				}
			}
			if (e && r < s && !f[e - 1][r]) {
				if (d[e - 1][r])
					d[e - 1][r]++;
				else {
					w.push({ e - 1, r });
					f[e - 1][r] = true;
				}
			}
			if (e + 1 < a && !f[e + 1][r]) {
				if (d[e + 1][r])
					d[e + 1][r]++;
				else {
					w.push({ e + 1, r });
					f[e + 1][r] = true;
				}
			}
		}
		int q = 0;
		for (int g = 0; g < a; g++) {
			for (int h = 0; h < s; h++) {
				if (d[g][h] >= 3) {
					d[g][h] = 0;
					q = 1;
				}
				else if (d[g][h] == 2)
					d[g][h] = 1;
			}
		}
		if (!q)
			break;
		t++;
	}
	printf("%d", t);
}
