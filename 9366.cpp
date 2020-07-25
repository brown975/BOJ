#include <stdio.h>
int a, s, d, f;
int main() {
	scanf("%d", &a);
	for (int g = 1; g <= a; g++) {
		scanf("%d%d%d", &s, &d, &f);
		printf("Case #%d: %s\n", g, (s + d > f) && (s + f > d) && (f + d > s) ? s == d ? f == s ? "equilateral" : "isosceles" : (f == s) || (f == d) ? "isosceles" : "scalene" : "invalid!");
	}
}
