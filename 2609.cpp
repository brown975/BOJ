#include <stdio.h>
int a, s;
int asdf(int e, int r) {
	if (r == 0)
		return e;
	return asdf(r, e % r);
}
int main() {
	scanf("%d%d", &a, &s);
	if (a < s) {
		int d = s;
		s = a;
		a = d;
	}
	printf("%d %d", asdf(a, s), a * s / asdf(a, s));
}
