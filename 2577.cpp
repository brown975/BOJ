#include <stdio.h>
int a, s[10], d = 1;
int main() {
	for (int g = 0; g < 3; g++) {
		scanf("%d", &a);
		d *= a;
	}
	while (d) {
		s[d % 10]++;
		d /= 10;
	}
	for (int g = 0; g < 10; g++) {
		printf("%d\n", s[g]);
	}
}
