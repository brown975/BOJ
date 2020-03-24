#include <stdio.h>
#include <algorithm>
using namespace std;
int a, s, d[9], f[9], t[9];
void asdf(int e) {
	if (e == s) {
		for (int g = 0; g < s; g++)
			printf("%d ", t[g]);
		puts("");
		return;
	}
	for (int g = 0; g < a; g++) {
		if (!f[g]) {
			t[e] = d[g];
			f[g] = 1;
			asdf(e + 1);
			f[g] = 0;
		}
	}
}
int main() {
	scanf("%d%d", &a, &s);
	for (int g = 0; g < a; g++)
		scanf("%d", &d[g]);
	sort(d, d + a);
	asdf(0);
}
