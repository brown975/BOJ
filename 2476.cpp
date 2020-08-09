#include <stdio.h>
int a, s;
int main() {
	scanf("%d", &a);
	while (a--) {
		int w, e, r;
		scanf("%d%d%d", &w, &e, &r);
		if (w == e && e == r)
			w = 100 + w * 10;
		else if (w == e || w == r)
			w = 10 + w;
		else if (e == r)
			w = 10 + e;
		else
			w = w > e ? w > r ? w : r : e > r ? e : r;
		w *= 100;
		if (s < w)
			s = w;
	}
	printf("%d", s);
}
