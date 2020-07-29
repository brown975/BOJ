#include <stdio.h>
char a[99], s;
int main() {
	scanf("%d", &s);
	while (s--) {
		scanf("\n%[^\n]s", a);
		if (a[0] > 96)
			a[0] -= 32;
		puts(a);
	}
}
