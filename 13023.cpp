#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <vector>
using namespace std;
int a, s, f, t[2005];
vector<int> d[2005];
void asdf(int e, int r) {
	if (r == 5) {
		f = 1;
		return;
	}
	t[e] = 1;
	for (int g : d[e]) {
		if (!t[g])
			asdf(g, r + 1);
		if (f)
			return;
	}
	t[e] = 0;
}
int main() {
	scanf("%d%d", &a, &s);
	for (int g = 0, e, r; g < s; d[e].push_back(r), d[r].push_back(e), g++)
		scanf("%d%d", &e, &r);
	for (int g = 0; g < a; g++) {
		memset(t, 0, sizeof(t));
		asdf(g, 1);
		if (f) {
			printf("1");
			return 0;
		}
	}
	printf("0");
}
