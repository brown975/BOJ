#include <stdio.h>
int a, s, d;
int main() {
	while (1) {
		scanf("%d%d%d", &a, &s, &d);
		if (!a && !s && !d)
			break;
		puts((a + s > d) && (s + d > a) && (d + a > s) ? a == s ? s == d ? "Equilateral" : "Isosceles" : (a == d) || (s == d) ? "Isosceles" : "Scalene" : "Invalid");
	}
}
