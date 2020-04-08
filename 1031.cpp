#include <stdio.h>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
int a, s, t[103][103], f[103][103], b, q, w, c = 0, v = 0;
vector<int> d[103];
void asdf(int e, int r) {
	q = 0, w = a + s + 1;
	t[q][e]--;
	t[e][q]++;
	t[e][r]--;
	t[r][e]++;
	t[r][w]--;
	t[w][r]++;
	queue<int> i;
	vector<int> u(a + s + 2, -1);
	i.push(e);
	u[e] = q;
	while (!i.empty()) {
		int y = i.front();
		i.pop();
		for (int g : d[y]) {
			if (y == e && g <= r)
				continue;
			if (g <= e)
				continue;
			if (f[y][g] > t[y][g] && u[g] == -1) {
				i.push(g);
				u[g] = y;
				if (g == w)
					break;
			}
		}
	}
	if (u[w] == -1) {
		t[q][e]++;
		t[e][q]--;
		t[e][r]++;
		t[r][e]--;
		t[r][w]++;
		t[w][r]--;
		return;
	}
	for (int g = w; g - q; t[u[g]][g]++, t[g][u[g]]--, g = u[g]);
}
int main() {
	scanf("%d%d", &a, &s);
	for (int g = 1; g <= a; g++) {
		d[0].push_back(g);
		d[g].push_back(0);
		scanf("%d", &f[0][g]);
		c += f[0][g];
	}
	for (int g = a + 1; g <= a + s; g++) {
		d[g].push_back(a + s + 1);
		d[a + s + 1].push_back(g);
		scanf("%d", &f[g][a + s + 1]);
		v += f[g][a + s + 1];
	}
	for (int g = 1; g <= a; g++)
		for (int h = a + 1; h <= a + s; d[g].push_back(h), d[h].push_back(g), f[g][h] = 1, h++);
	if (c - v) {
		printf("-1");
		return 0;
	}
	q = 0, w = a + s + 1;
	while (1) {
		vector<int> u(a + s + 2, -1);
		queue<int> i;
		i.push(q);
		while (!i.empty()) {
			int y = i.front();
			i.pop();
			for (int g : d[y])
				if (f[y][g] > t[y][g] && u[g] == -1) {
					i.push(g);
					u[g] = y;
					if (g == w)
						break;
				}
		}
		if (u[w] == -1)
			break;
		for (int g = w; g - q; g = u[g]) {
			t[u[g]][g]++;
			t[g][u[g]]--;
		}
		b++;
	}
	if (b - c) {
		printf("-1");
		return 0;
	}
	for (int g = 1; g <= a; puts(""), g++)
		for (int h = a + 1; h <= a + s; printf("%d", t[g][h]),h++)
			if (t[g][h] == 1)
				asdf(g, h);
}
