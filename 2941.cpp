#include <stdio.h>
#include <string.h>
char a[105];
int s = 0;
int main() {
	scanf("%s", a);
	for (int g = 0; g < strlen(a); g++) {
		if (a[g] == 'c') {
			if (a[g + 1] == '=')
				g++;
			else if (a[g + 1] == '-')
				g++;
		}
		if (a[g] == 'd') {
			if (a[g + 1] == 'z')
				if (a[g + 2] == '=')
					g += 2;
			if (a[g + 1] == '-')
				g++;
		}
		if (a[g] == 'l')
			if (a[g + 1] == 'j')
				g++;
		if (a[g] == 'n')
			if (a[g + 1] == 'j')
				g++;
		if (a[g] == 's')
			if (a[g + 1] == '=')
				g++;
		if (a[g] == 'z')
			if (a[g + 1] == '=')
				g++;
		s++;
	}
	printf("%d", s);
}
