#include <stdio.h>
int a, s;
int main() {
	while (1) {
		scanf("%d%d", &a, &s);
		if (!a & !s)
			break;
		printf("%d\n", a + s);
	}
}
