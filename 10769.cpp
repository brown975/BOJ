#include <stdio.h>
char a[105], s, d;
int main() {
	scanf("\n%[^\n]s", a);
	for (int g = 0; a[g]; g++) {
		if (a[g] == ':')
			if (a[g + 1] == '-')
				if (a[g + 2] == '(') {
					s++; d = 1;
				}
				else if (a[g + 2] == ')') {
					s--; d = 1;
				}
	}
	printf(s < 0 ? "happy" : s>0 ? "sad" : d ? "unsure" : "none");
}
