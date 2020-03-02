#include <stdio.h>
int a, s, f;
int main(void) {
	scanf("%d%d", &a, &s);
	printf("%d\n%d\n%d\n%d\n%d", a + s, a - s, a * s, a / s, a % s);
}
