#include <stdio.h>
int a, s;
char d[85];
int main() {
	scanf("%d", &a);
	while (a--) {
		scanf("%d %[^\n]s", &s, d);
		s--;
		for (int g = 0; d[g]; g++)
			if (g - s)
				printf("%c", d[g]);
		puts("");
	}
}
