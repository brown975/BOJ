#include <stdio.h>
#include <vector>
#include <queue>
using namespace std;
int a, s, d, t[55][55], c[55][55], v[55];
vector<int> f;
queue<pair<int, int>> q;
int main() {
	scanf("%d%d%d", &a, &s, &d);
	for (int g = 0, e; g < d; f.push_back(e), g++)
		scanf("%d", &e);
	for (int g = 0, e, r; g < s; g++) {
		scanf("%d", &e);
		for (int h = 0; h < e; t[g][r] = 1, h++)
			scanf("%d", &r);
	}
	if (!d)
		printf("%d", s);
	else {
		for (int g = 0; g < s; g++)
			for (int h = 0; h < d; h++)
				if (t[g][f[h]])
					for (int j = 0; j < 55; j++)
						if (t[g][j])
							q.push({ g,j });
		while (!q.empty()) {
			int e = q.front().first, r = q.front().second;
			q.pop();
			if (c[e][r])
				continue;
			c[e][r] = v[e] = 1;
			for (int g = 0; g < s; g++)
				if (t[g][r])
					for (int h = 0; h < 55; h++)
						if (t[g][h])
							q.push({ g,h });
		}
		int w = 0;
		for (int g = 0; g < s; g++)
			if (!v[g])
				w++;
		printf("%d", w);
	}
}
