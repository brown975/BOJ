#include <stdio.h>
#include <deque>
using namespace std;
int a, s, d[105][105], f[105][105];
int main() {
	scanf("%d%d", &s, &a);
	for (int g = 0; g < a; g++)
		for (int h = 0; h < s; h++)
			scanf("%1d", &d[g][h]);
	deque<pair<int, int>> t;
	t.push_back({ 0, 0 });
	d[0][0] = -1;
	while (!t.empty()) {
		int e = t.back().first, r = t.back().second;
		t.pop_back();
		if (r + 1 < s && d[e][r + 1] + 1) {
			if (d[e][r + 1]) {
				t.push_front({ e, r + 1 });
				f[e][r + 1] = f[e][r] + 1;
			}
			else {
				t.push_back({ e, r + 1 });
				f[e][r + 1] = f[e][r];
			}
			d[e][r + 1] = -1;
		}
		if (r && d[e][r - 1] + 1) {
			if (d[e][r - 1]) {
				t.push_front({ e, r - 1 });
				f[e][r - 1] = f[e][r] + 1;
			}
			else {
				t.push_back({ e, r - 1 });
				f[e][r - 1] = f[e][r];
			}
			d[e][r - 1] = -1;
		}
		if (e && d[e - 1][r] + 1) {
			if (d[e - 1][r]) {
				t.push_front({ e - 1, r });
				f[e - 1][r] = f[e][r] + 1;
			}
			else {
				t.push_back({ e - 1, r });
				f[e - 1][r] = f[e][r];
			}
			d[e - 1][r] = -1;
		}
		if (e + 1 < a && d[e + 1][r] + 1) {
			if (d[e + 1][r]) {
				t.push_front({ e + 1, r });
				f[e + 1][r] = f[e][r] + 1;
			}
			else {
				t.push_back({ e + 1, r });
				f[e + 1][r] = f[e][r];
			}
			d[e + 1][r] = -1;
		}
	}
	printf("%d", f[a - 1][s - 1]);
}
