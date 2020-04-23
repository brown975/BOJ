#include <stdio.h>
int a, s[100005], d[100005], f[100005];
void asdf(int w, int e, int r) {
	if (!r)
		return;
	if (r == 1) {
		printf("%d ", d[e]);
		return;
	}
	printf("%d ", d[e + r - 1]);
	asdf(w, e, f[d[e + r - 1]] - w);
	asdf(f[d[e + r - 1]] + 1, e + f[d[e + r - 1]] - w, r - f[d[e + r - 1]] + w - 1);
}
int main() {
	scanf("%d", &a);
	for (int g = 0; g < a; f[s[g]] = g, g++)
		scanf("%d", &s[g]);
	for (int g = 0; g < a; g++)
		scanf("%d", &d[g]);
	asdf(0, 0, a);
}
