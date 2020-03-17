#include <stdio.h>
#include <algorithm>
using namespace std;
int a, s, d[100005], f[100005];
int main() {
	scanf("%d", &a);
	for (int g = 0, e; g < a; g++)
		scanf("%d", &d[g]);
	sort(d, d + a);
	scanf("%d", &s);
	while (s--) {
		scanf("%d", &f[s]);
		int w = 0, e = 0, r = a - 1;
		while (e <= r) {
			if (d[(e + r) / 2] == f[s]) {
				w = 1;
				break;
			}
			else if (d[(e + r) / 2] < f[s])
				e = (e + r) / 2 + 1;
			else if (d[(e + r) / 2] > f[s])
				r = (e + r) / 2 - 1	;
		}
		if (w)
			printf("1");
		else
			printf("0");
		puts("");
	}
}
