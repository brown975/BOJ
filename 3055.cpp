#include <stdio.h>
#include <queue>
using namespace std;
int a, s, t[55][55], c, v;
char d[55][55];
queue<pair<pair<int, int>, int>> q;
int main() {
	scanf("%d%d", &a, &s);
	for (int g = 0; g < a; g++) {
		scanf("%s", d[g]);
		for (int h = 0; h < s; h++) {
			if (d[g][h] == '*') {
				q.push({ {g, h}, 0 });
				t[g][h] = 1;
			}
			else if (d[g][h] == 'S') {
				c = g;
				v = h;
			}
		}
	}
	q.push({ {c, v }, 1 });
	t[c][v] = 1;
	while (!q.empty()) {
		int w = q.front().first.first, e = q.front().first.second, r = q.front().second;
		q.pop();
		if (w + 1 < a && d[w + 1][e] - 'X' && !t[w + 1][e]) {
			if (d[w + 1][e] == 'D') {
				if (!r)
					continue;
				printf("%d", t[w][e]);
				return 0;
			}
			t[w + 1][e] = t[w][e] + 1;
			q.push({ {w + 1, e }, r });
		}
		if (w && d[w - 1][e] - 'X' && !t[w - 1][e]) {
			if (d[w - 1][e] == 'D') {
				if (!r)
					continue;
				printf("%d", t[w][e]);
				return 0;
			}
			t[w - 1][e] = t[w][e] + 1;
			q.push({ {w - 1, e }, r });
		}
		if (e && d[w][e - 1] - 'X' && !t[w][e - 1]) {
			if (d[w][e - 1] == 'D') {
				if (!r)
					continue;
				printf("%d", t[w][e]);
				return 0;
			}
			t[w][e - 1] = t[w][e] + 1;
			q.push({ {w , e - 1}, r });
		}
		if (e + 1 < s && d[w][e + 1] - 'X' && !t[w][e + 1]) {
			if (d[w][e + 1] == 'D') {
				if (!r)
					continue;
				printf("%d", t[w][e]);
				return 0;
			}
			t[w][e + 1] = t[w][e] + 1;
			q.push({ {w , e + 1}, r });
		}
	}
	printf("KAKTUS");
}
