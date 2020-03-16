#include <stdio.h>
int a;
int main() {
	scanf("%d", &a);
	for (int g = 2; g <= a; g++) {
		if (!(a % g)) {
			printf("%d\n", g);
			a /= g;
			g = 1;
			continue;
		}
	}
}
