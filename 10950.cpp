#include <stdio.h>
int a, s, d;
int main(void) {
	scanf("%d", &a);
	while (a--) {
		scanf("%d%d", &s, &d);
		printf("%d\n", s + d);
	}
}
