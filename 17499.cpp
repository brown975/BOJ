#include <stdio.h>
int a, s, d[200005], f;
int main() {
	scanf("%d%d", &a, &s);
	for (int g = 0; g < a; g++)
		scanf("%d", &d[g]);
	while (s--) {
		int w, e, r;
		scanf("%d", &w);
		if (w - 1) {
			scanf("%d", &e);
			f += (w == 3) ? e : a - e;
			f %= a;
		}
		else {
			scanf("%d%d", &e, &r);
			d[(e + f - 1) % a] += r;
		}
	}
	for (int g = f; g < a + f; g++)
		printf("%d ", d[g % a]);
}
