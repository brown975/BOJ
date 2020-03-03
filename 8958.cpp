#include <stdio.h>
#include <string.h>
int a;
char s[85];
int main() {
	scanf("%d", &a);
	while (a--) {
		int d = 0, f = 0;
		scanf("%s", s);
		for (int g = 0; g < strlen(s); g++) {
			if (s[g] == 'O')
				f += ++d;
			else
				d = 0;
		}
		printf("%d\n", f);
	}
}
