#include <stdio.h>
#include <algorithm>
using namespace std;
int a, s, d[9], t[9];
void asdf(int e, int r) {
	if (r == s) {
		for (int g = 0; g < s; g++)
			printf("%d ", t[g]);
		puts("");
		return;
	}
	for (int g = e; g < a; g++) {
		t[r] = d[g];
		asdf(g, r + 1);
	}
}
int main() {
	scanf("%d%d", &a, &s);
	for (int g = 0; g < a; g++)
		scanf("%d", &d[g]);
	sort(d, d + a);
	asdf(0, 0);
}
