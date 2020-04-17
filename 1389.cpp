#include <stdio.h>
#include <string.h>
#include <vector>
#include <queue>
using namespace std;
int a, s, f[105][105], q, t = 9999999, y;
vector<int> d[105];
int main() {
	memset(f, 10000, sizeof(f));
	scanf("%d%d", &a, &s);
	for (int g = 0, e, r; g < s; d[e - 1].push_back(r - 1), d[r - 1].push_back(e - 1), g++)
		scanf("%d%d", &e, &r);
	for (int g = 0; g < a; g++) {
		q = 0;
		queue<pair<int, int>> e;
		e.push({ g, 0 });
		f[g][g] = 0;
		while (e.size()) {
			pair<int, int> r = e.front();
			e.pop();
			if (f[g][r.first] < r.second)
				continue;
			f[g][r.first] = r.second;
			for (int h : d[r.first])
				if (r.second + 1 < f[g][h])
					e.push({ h, r.second + 1 });
		}
		for (int h = 0; h < a; h++)
			q += f[g][h];
		if (q < t) {
			t = q;
			y = g;
		}
	}
	printf("%d", y + 1);
}
