#include <stdio.h>
int a, s, d, f;
int main() {
	scanf("%d", &a);
	while (a--) {
		scanf("%d%d%d", &s, &d, &f);
		printf("%d%02d\n", (f - 1) % s + 1, (f - 1) / s + 1);
	}
}
