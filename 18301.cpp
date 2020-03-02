#include <stdio.h>
int a, s, d;
int main() {
	scanf("%d%d%d", &a, &s, &d);
	printf("%d", (a + 1) * (s + 1) / (d + 1) - 1);
}
