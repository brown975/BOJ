#include <stdio.h>
int a, s[10], d, f;
int main() {
	scanf("%d", &a);
	for (int g = 1; a; g *= 10) {
		f = a % 10;
		a /= 10;
		for (int h = 0; h < f; h++)
			s[h] += (a + 1) * g;
		s[f] += a * g + d + 1;
		for (int h = f + 1; h < 10; h++)
			s[h] += a * g;
		s[0] -= g;
		d += f * g;
	}
	for (int g = 0; g < 10; g++)
		printf("%d ", s[g]);
}
