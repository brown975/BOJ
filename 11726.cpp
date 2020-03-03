#include <stdio.h>
int d, a[1000] = { 1, 1 };
int main(void) {
	scanf("%d", &d);
	for (int g = 2; g <= d; g++) {
		a[g] = (a[g - 1] + a[g - 2]) % 10007;
	}
	printf("%d\n", a[d]);
}
