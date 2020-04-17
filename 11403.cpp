#include <stdio.h>
#include <queue>
#include <string.h>
#include <vector>
using namespace std;
int a, d[105][105], f[105];
vector<int> r[105];
int main() {
	scanf("%d", &a);
	for (int g = 0, e; g < a; g++)
		for (int h = 0; h < a; e ? r[g].push_back(h) : void(), h++)
			scanf("%d", &e);
	for (int g = 0; g < a; g++) {
		queue<int> e;
		e.push(g);
		f[g] = 1;
		while (e.size()) {
			int w = e.front();
			e.pop();
			f[w] = 1;
			for (int h : r[w]) {
				if (!f[h])
					e.push(h);
				d[g][h] = 1;
			}
		}
		memset(f, 0, sizeof(f));
	}
	for (int g = 0; g < a; g++, puts(""))
		for (int h = 0; h < a; h++)
			printf("%d ", d[g][h]);
}
