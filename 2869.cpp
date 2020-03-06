#include <stdio.h>
long long a, s, d;
int main() {
	scanf("%lld%lld%lld", &a, &s, &d);
	printf("%lld", (d - s - 1) / (a - s) + 1);
}
