#include <stdio.h>
int a, s;
int main() {
	scanf("%d", &a);
	while (a--) {
		scanf("%d", &s);
		while (s--)
			printf("=");
		puts("");
	}
}
