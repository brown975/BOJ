#include <stdio.h>
int s, d;
int main(void) {
	scanf("%d", &s);
	while (s--) {
		int a[50] = { 1, 1, 2 };
		scanf("%d", &d);
		for (int g = 3; g <= d; g++) {
			a[g] = a[g - 1] + a[g - 2] + a[g - 3];
		}
		printf("%d\n", a[d]);
	}
}
