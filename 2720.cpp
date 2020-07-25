#include <stdio.h>
int a, s;
int main() {
	scanf("%d", &a);
	for (int g = 1; g <= a; g++) {
		scanf("%d", &s);
		printf("%d %d %d %d\n", s / 25, s % 25 / 10, s % 25 % 10 / 5, s % 5);
	}
}
