#include <stdio.h>
long long a, e, r, s[1001][1001];
int main() {
	s[1][1] = s[2][1] = s[2][2] = s[3][1] = s[3][3] = 1;
	s[3][2] = 2;
	for (int g = 4; g <= 1000; g++)
		for (int h = 2; h <= 1000; h++)
			s[g][h] += (s[g - 1][h - 1] + s[g - 2][h - 1] + s[g - 3][h - 1]) % 1000000009;
	scanf("%d", &a);
	while (a--) {
		scanf("%d%d", &e, &r);
		printf("%d\n", s[e][r]);
	}
}
