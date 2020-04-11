#include <stdio.h>
#include <vector>
#include <queue>
using namespace std;
int a, s, f[1005], t;
vector<int> d[1005];
queue<int> w;
int main() {
	scanf("%d%d", &a, &s);
	for (int g = 0, e, r; g < s; d[e].push_back(r), d[r].push_back(e), g++)
		scanf("%d%d", &e, &r);
	for (int g = 1; g <= a; g++)
		if (!f[g]) {
			w.push(g);
			f[g] = 1;
			while (w.size()) {
				int q = w.front();
				w.pop();
				for (int h : d[q]) {
					if (!f[h]) {
						w.push(h);
						f[h] = 1;
					}
				}
			}
			t++;
		}
	printf("%d", t);
}
