#include <stdio.h>
#include <math.h>
int a, s, d;
int max(int e, int r) {
	return(e > r) ? e : r;
}
int main() {
	scanf("%d%d%d", &a, &s, &d);
	printf("%d", (s == d) ? (a == d) ? 10000 + a * 1000 : 1000 + s * 100 : (a == d) ? 1000 + a * 100 : (a == s) ? 1000 + a * 100 : 100 * max(a, max(s, d)));
}
