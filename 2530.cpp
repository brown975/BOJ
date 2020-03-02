#include <stdio.h>
int a, s, d, f;
int main() {
	scanf("%d%d%d%d", &a, &s, &d, &f);
	if (d + f > 59) {
		s += (d + f) / 60;
		a += s / 60;
		d = (d + f) % 60;
		printf("%d %d %d", a % 24, s % 60, d);
	}
	else
		printf("%d %d %d", a, s, d + f);
}
