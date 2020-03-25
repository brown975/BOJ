#include <stdio.h>
#include <algorithm>
using namespace std;
int a, s, d, f, e, r[10];
int asdf(int w) {
	int q = 0;
	while (w) {
		if (r[w % 10])
			return 0;
		w /= 10;
		q++;
	}
	return q;
}
int main() {
	scanf("%d%d", &a, &s);
	for (int g = 0; g < s; r[e] = true, g++)
		scanf("%d", &e);
	f = a - 100;
	if (f < 0)
		f = -f;
	if (!r[0])
		f = min(f, a + 1);
	for (int g = a; g < 1111111; g++) {
		d = asdf(g);
		if (d) {
			d += g - a;
			f = min(f, d);
			break;
		}
	}
	for (int g = a; g; g--) {
		d = asdf(g);
		if (d) {
			d += a - g;
			f = min(f, d);
			break;
		}
	}
	printf("%d", f);
}
