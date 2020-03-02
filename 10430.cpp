#include <stdio.h>
int a, s, d;
int main(void) {
	scanf("%d%d%d", &a, &s, &d);
	printf("%d\n%d\n%d\n%d", (a + s) % d, (a + s) % d, (a * s) % d, (a * s) % d);
}
