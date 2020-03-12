#include <stdio.h>
#include <string.h>
char a[16];
int s = 0;
int main() {
	scanf("%s", a);
	for (int g = 0; g < strlen(a); g++) {
		if (a[g] > 86)
			s += 10;
		else if (a[g] > 83)
			s += 9;
		else if (a[g] > 79)
			s += 8;
		else
			s += (a[g] - 65) / 3 + 3;
	}
	printf("%d", s);
}
