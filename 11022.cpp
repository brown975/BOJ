#include <stdio.h>
int a, s, d;
int main(void) {
	scanf("%d", &a);
	for (int g = 1; g <= a; g++) {
		scanf("%d%d", &s, &d);
		printf("Case #%d: %d + %d = %d\n", g, s, d, s + d);
	}
}
