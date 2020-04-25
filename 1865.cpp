#include <stdio.h>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
int t[505][505], q[505];
int main() {
	int a;
	scanf("%d", &a);
	while (a--) {
		int s, d, f;
		scanf("%d%d%d", &s, &d, &f);
		for (int g = 1; g <= s; g++) {
			q[g] = 2000000000;
			for (int h = 1; h <= s; h++)
				t[g][h] = 2000000000;
		}
		q[1] = 0;
		while (d--) {
			int w, e, r;
			scanf("%d%d%d", &w, &e, &r);
			t[w][e] = min(t[w][e], r);
			t[e][w] = min(t[e][w], r);
		}
		while (f--) {
			int w, e, r;
			scanf("%d%d%d", &w, &e, &r);
			t[w][e] = min(t[w][e], -r);
		}
		vector<pair<int, int>> v[505];
		for (int g = 1; g <= s; g++)
			for (int h = 1; h <= s; h++)
				if (t[g][h] < 2000000000)
					v[g].push_back({ h, t[g][h] });
		bool c = false;
		for (int g = 1; g <= s + 1; g++)
			for (int h = 1; h <= s; h++)
				for (auto j : v[h])
					if (q[h] + j.second < q[j.first]) {
						q[j.first] = q[h] + j.second;
						if (g == s + 1)
							c = true;
					}
		if (c)
			printf("YES\n");
		else
			printf("NO\n");
	}
}
