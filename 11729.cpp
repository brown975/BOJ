#include <stdio.h>
int a;
void asdf(int s, int d, int f) {
	if (s) {
		asdf(s - 1, d, 6 - d - f);
		printf("%d %d\n", d, f);
		asdf(s - 1, 6 - d - f, f);
	}
}
int main() {
	scanf("%d", &a);
	printf("%d\n", (1 << a) - 1);
	asdf(a, 1, 3);
}
