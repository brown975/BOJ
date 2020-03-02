#include <stdio.h>
#include <math.h>
int a, s, d;
int main() {
	scanf("%d%d%d", &a, &s, &d);
	if (s + d > 59) {
		a += (s + d) / 60;
		s = (s + d) % 60;
		printf("%d %d", a % 24, s);
	}
	else
		printf("%d %d", a, s + d);
}
