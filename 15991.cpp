#include <stdio.h>
long long a[100005] = { 1, 1, 2 }, s, d;
int main(void) {
	scanf("%lld", &s);
	for (int g = 3; g <= 70000; g++)
		a[g] = (a[g - 1] + a[g - 2] + a[g - 3]) % 1000000009;
	while (s--) {
		scanf("%lld", &d);
		printf("%lld\n", (a[d / 2] + a[d / 2 - 1]) % 1000000009);
	}
}
