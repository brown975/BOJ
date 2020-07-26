#include <stdio.h>
#include <string.h>
char a[105], s;
int main() {
	scanf("%s", a);
	s = strlen(a);
	for (int g = 0; g <= s / 2; g++)
		if (a[g] - a[s - g - 1]) {
			puts("0");
			return 0;
		}
	puts("1");
}
