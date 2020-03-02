#include <stdio.h>
int a, g = 1;
int main(void) {
	scanf("%d", &a);
	for (; g < 10; g++)
		printf("%d * %d = %d\n", a, g, a * g);
}
