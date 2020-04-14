#include <stdio.h>
long long a, d = 1, f;
char s[55];
int main() {
	scanf("%lld\n%s", &a, s);
	for (int g = 0; g < a; g++) {
		s[g] -= 96;
		f += s[g] * d;
		f %= 1234567891;
		d *= 31;
		d %= 1234567891;
	}
	printf("%lld", f);
}
