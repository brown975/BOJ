#include <stdio.h>
int a, s, d[100005], f[100005];
int main() {
	scanf("%d%d", &a, &s);
	for (int g = 1; g <= a; f[g] = f[g - 1] + d[g], g++)
		scanf("%d", &d[g]);
	for (int g = 0, e, r; g < s; printf("%d\n", f[r] - f[e - 1]), g++)
		scanf("%d%d", &e, &r);
}
