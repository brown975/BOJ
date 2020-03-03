#include <stdio.h>
int a, s, d = 1;
int main() {
	scanf("%d", &a);
	s = (a % 10 + a / 10) % 10 + a % 10 * 10;
	while (s - a) { 
		s = (s % 10 + s / 10) % 10 + s % 10 * 10;
		d++;
	}
	printf("%d", d);
}
