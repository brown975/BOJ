#include <stdio.h>
long long a, s, d, f;
int main() {
	scanf("%lld%lld%lld%lld", &a, &s, &d, &f);
	printf("%lld", (a * d) % (s * f * 2) ? 0 : 1);
}
