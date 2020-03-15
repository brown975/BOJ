#include <stdio.h>
long long a, s[1000005] = { 0 };
int main(void) {
	scanf("%lld", &a);
	s[1] = 1;
	s[2] = 2;
	for (int g = 3; g <= a; g++)
		s[g] = (s[g - 1] + s[g - 2]) % 15746;
	printf("%lld", s[a]);
}
