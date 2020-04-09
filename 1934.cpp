#include <stdio.h>
int a, s, d;
int asdf(int e, int r) {
	return r ? asdf(r, e % r) : e;
}
int main() {
	scanf("%d", &a);
	while (a--) {
		scanf("%d%d", &s, &d);
		printf("%d\n", s / asdf(s, d) * d);
	}
}
