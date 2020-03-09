#include <stdio.h>
int a, s = 0, d;
int main(void) {
	scanf("%d", &d);
	for (int g = 0; g < d; g++, s += a)
		scanf("%1d", &a);
	printf("%d", s);
}
