#include <stdio.h>
int a, s;
int main() {
	while (scanf("%d%d", &a, &s) != EOF) {
		printf("%d\n", a + s);
	}
}
