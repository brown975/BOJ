#include <stdio.h>
#include <set>
using namespace std;
int a, s, d[100004], w, e, r;
set<pair<int, int>> f;
int main() {
	scanf("%d", &a);
	for (int g = 1; g <= a; g++) {
		scanf("%d", &d[g]);
		f.insert({ d[g], g });
	}
	scanf("%d", &s);
	while (s--) {
		scanf("%d", &w);
		if (w == 1) {
			scanf("%d%d", &e, &r);
			f.erase({ d[e],e });
			d[e] = r;
			f.insert({ r,e });
		}
		else
			printf("%d\n", f.begin()->second);
	}
}
