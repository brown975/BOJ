#include <stdio.h>
int a, s;
int main(void) {
	scanf("%d%d", &a, &s);
	printf("%d\n%d\n%d\n%d", a * (s % 10), a * ((s / 10) % 10), a * (s / 100), a * s);
}
