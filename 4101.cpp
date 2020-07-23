#include <stdio.h>
int a, s;
int main() {
	scanf("%d%d", &a, &s);
	while (a || s) {
		puts(a > s ? "Yes" : "No");
		scanf("%d%d", &a, &s);
	}
}
