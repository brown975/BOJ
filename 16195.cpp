#include <stdio.h>
long long a, e, r, s[1005][1005], f;
int main() {
	s[1][1] = s[2][1] = s[2][2] = s[3][1] = s[3][3] = 1;
	s[3][2] = 2;
	for (int g = 4; g <= 1002; g++)
		for (int h = 2; h <= 1002; h++)
			s[g][h] += (s[g - 1][h - 1] + s[g - 2][h - 1] + s[g - 3][h - 1]) % 1000000009;
	scanf("%lld", &a);
	while (a--) {
		scanf("%lld%lld", &e, &r);
		f = 0;
		for (int g = 0; g <= r; g++) {
			f += s[e][g];
			f %= 1000000009;
		}
		printf("%lld\n", f);
	}
}
