#include <stdio.h>
int a, s, d = 0;
int main() {
	scanf("%d", &a);
	while (a--) {
		scanf("%d", &s);
		if (s % 2)
			printf("koosaga\n");
		else
			printf("cubelover\n");
	}
}
