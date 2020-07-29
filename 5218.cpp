#include <stdio.h>
#include <string.h>
char d, a[85], s[85];
int main() {
	scanf("%d", &d);
	while (d--) {
		scanf("%s%s", a, s);
		printf("Distances: ");
		for (int g = 0; a[g]; g++)
			printf("%d ", a[g] > s[g] ? s[g] - a[g] + 26 : s[g] - a[g]);
		puts("");
	}
}
