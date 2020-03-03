#include <stdio.h>
int a, s, d;
int main() {
	scanf("%d%d%d", &a, &s, &d);
	if (a == 60 & s == 60 & d == 60)
		printf("Equilateral");
	else if (a + s + d != 180)
		printf("Error");
	else if (a == s | s == d | d == a)
		printf("Isosceles");
	else
		printf("Scalene");
}
