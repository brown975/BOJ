#include <stdio.h>
#include <string.h>
long long d, a[100] = { 0, 1, 1 };
int main(void) {
	scanf("%lld", &d);
	for (int g = 3; g <= d; g++) {
		a[g] = a[g - 1] + a[g - 2];
	}
	printf("%lld", a[d]);
}
