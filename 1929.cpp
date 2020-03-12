#include <stdio.h>
int a, s, d = 0, f, e = 0;
int main() {
	scanf("%d%d", &a, &s);
	for (int g = a; g <= s; g++) {
		f = 1;
		if (g == 1)
			f = 0;
		for (int h = 2; h * h <= g; h++) {
			if (!(g % h)) {
				f = 0;
				break;
			}
		}
		if (f) {
			printf("%d\n", g);
			e = g;
			d += g;
		}
	}
}
