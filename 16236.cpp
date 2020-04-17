#include <iostream>
#include <string.h>
#include <queue>
using namespace std;
int a, s[20][20], d = 2, f[20][20], b;
queue<pair<int, int>> t;
int main() {
	scanf("%d", &a);
	for (int g = 0; g < a; g++)
		for (int h = 0; h < a; h++) {
			scanf("%d", &s[g][h]);
			if (s[g][h] == 9) {
				t.push({ g, h });
				f[g][h] = 0;
				s[g][h] = 0;
			}
		}
	int e, r, q = 100, w = 100, v = 0, c, y;
	while (!t.empty()) {
		c = t.size();
		while (c--) {
			e = t.front().first;
			r = t.front().second;
			t.pop();
			if (r + 1 < a && !f[e][r + 1] && s[e][r + 1] <= d) {
				t.push({ e, r + 1 });
				f[e][r + 1] = f[e][r] + 1;
				if (s[e][r + 1] && s[e][r + 1] < d) {
					if (q > e) {
						q = e;
						w = r + 1;
					}
					else if (q == e && w > r + 1) {
						q = e;
						w = r + 1;
					}
				}
			}
			if (r && !f[e][r - 1] && s[e][r - 1] <= d) {
				t.push({ e, r - 1 });
				f[e][r - 1] = f[e][r] + 1;
				if (s[e][r - 1] && s[e][r - 1] < d) {
					if (q > e) {
						q = e;
						w = r - 1;
					}
					else if (q == e && w > r - 1) {
						q = e;
						w = r - 1;
					}
				}
			}
			if (e && !f[e - 1][r] && s[e - 1][r] <= d) {
				t.push({ e - 1, r });
				f[e - 1][r] = f[e][r] + 1;
				if (s[e - 1][r] && s[e - 1][r] < d) {
					if (q > e - 1) {
						q = e - 1;
						w = r;
					}
					else if (q == e - 1 && w > r) {
						q = e - 1;
						w = r;
					}
				}
			}
			if (e + 1 < a && !f[e + 1][r] && s[e + 1][r] <= d) {
				t.push({ e + 1, r });
				f[e + 1][r] = f[e][r] + 1;
				if (s[e + 1][r] && s[e + 1][r] < d) {
					if (q > e + 1) {
						q = e + 1;
						w = r;
					}
					else if (q == e + 1 && w > r) {
						q = e + 1;
						w = r;
					}
				}
			}
		}
		if (q - 100) {
			s[q][w] = 0;
			y = f[q][w];
			if (++v == d) {
				d++;
				v = 0;
			}
			while (!t.empty())
				t.pop();
			memset(f, 0, sizeof(f));
			t.push({ q, w });
			f[q][w] = b = y;
			q = w = 100;
		}
	}
	printf("%d", b);
}
