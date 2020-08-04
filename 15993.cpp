#include <stdio.h>
long long a, s[100005][2] = { 0, 0, 0, 1, 1, 1, 2, 2 }, e, r;
int main() {
	for (int g = 4; g <= 100000; g++) {
		s[g][0] += (s[g - 1][1] + s[g - 2][1] + s[g - 3][1]) % 1000000009;
		s[g][1] += (s[g - 1][0] + s[g - 2][0] + s[g - 3][0]) % 1000000009;
	}
	scanf("%lld", &a);
	while (a--) {
		scanf("%lld", &e);
		printf("%lld %lld\n", s[e][1], s[e][0]);
	}
}
