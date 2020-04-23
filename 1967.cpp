#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
int a, d, f;
vector<pair<int,int>> s[10005];
void asdf(int w, int e, int r) {
	if (f < r)
		f = r, d = e;
	for (auto g : s[e])
		if (w - g.first)
			asdf(e, g.first, r + g.second);
}
int main() {
	scanf("%d", &a);
	for (int g = 1, w, e, r; g < a; g++) {
		scanf("%d %d %d", &w, &e, &r);
		s[w].push_back({ e,r });
		s[e].push_back({ w,r });
	}
	d = 1;
	asdf(0, d, 0);
	f = 0;
	asdf(0, d, 0);
	printf("%d", f);
}
