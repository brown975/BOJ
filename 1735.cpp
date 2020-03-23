#include <stdio.h>
int asdf(int e, int r) {
	return r ? asdf(r, e % r) : e;
}
int a, s, d, f, g;
int main() {
	scanf("%d%d%d%d", &a, &s, &d, &f);
	a = a * f + s * d, d = s * f, s = asdf(a, d);
	printf("%d %d", a / s, d / s);
}
