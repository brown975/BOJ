#include <stdio.h>
int a, s, d;
int main() {
	scanf("%d", &a);
	for (int g = 1; g <= a; g++) {
		scanf("%d%d", &s, &d);
		printf("Case %d: %d\n", g, s + d);
	}
}
