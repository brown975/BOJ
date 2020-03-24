#include <stdio.h>
#include <algorithm>
#include <set>
#include <vector>
using namespace std;
int a, s, d[9], w[9];
set<vector<int>> f;
vector<int> t(9);
void asdf(int r) {
	if (r == s) {
		f.insert(t);
		return;
	}
	for (int g = 0; g < a; g++) {
		t[r] = d[g];
		asdf(r + 1);
	}
}
int main() {
	scanf("%d%d", &a, &s);
	for (int g = 0; g < a; g++)
		scanf("%d", &d[g]);
	sort(d, d + a);
	asdf(0);
	for (auto g : f) {
		for (int h = 0; h < s; h++)
			printf("%d ", g[h]);
		puts("");
	}
}
