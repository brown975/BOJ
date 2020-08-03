#include <stdio.h>
long long a, s, d;
int main() {
	scanf("%lld%lld%lld", &a, &s, &d);
	printf("%lld", ((a + d - 1) / d) * ((s + d - 1) / d));
}
