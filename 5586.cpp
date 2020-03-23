#include <stdio.h>
#include <string.h>
char a[10005];
int s, d;
int main() {
	scanf("%s", a);
	for (int g = 0; g < strlen(a) - 2; g++)
		if (a[g + 1] == 'O')
			if (a[g + 2] == 'I') {
				if (a[g] == 'I')
					s++;
				else if (a[g] == 'J')
					d++;
			}
	printf("%d\n%d", d, s);
}
