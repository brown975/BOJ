#include <stdio.h>
int a, f = 0, g;
int asdf(int s) {
	int d = s;
	while (s) {
		d += s % 10;
		s /= 10;
	}
	return d;
}
int main() {
	scanf("%d", &a);
	for (g = a; g > 0; g--)
		if (a == asdf(g))
			f = g;
	printf("%d", f);
}
