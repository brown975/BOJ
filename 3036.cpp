#include <stdio.h>
int a, s[105];
int asdf(int e, int r) {
	if (!(e % r))
		return r;
	return asdf(r, e % r);
}
int main(void) {
	scanf("%d", &a);
	for (int g = 0; g < a; g++)
		scanf("%d", &s[g]);
	for (int g = 1, d; g < a; g++)
		printf("%d/%d\n", s[0] / asdf(s[0], s[g]), s[g] / asdf(s[0], s[g]));
}
