#include <stdio.h>
int a, s;
int main() {
	scanf("%d%d", &a, &s);
	s -= 45;
	if (s < 0) {
		a--;
		s += 60;
	}
	if (a < 0)
		a += 24;
	printf("%d %d", a, s);
}
