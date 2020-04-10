#include <stdio.h>
int a, s, d, w, e, r;
int main() {
	scanf("%d%d%d", &a, &s, &d);
	for (int g = 1; g <= 7980; g++) {
		w++;
		e++;
		r++;
		if (w > 15)
			w = 1;
		if (e > 28)
			e = 1;
		if (r > 19)
			r = 1;
		if (a == w && s == e && d == r)
			printf("%d", g);
	}
}
