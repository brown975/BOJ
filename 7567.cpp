#include <stdio.h>
char a[105], s, d;
int main() {
	scanf("%s", a);
	for (int g = 0; a[g]; g++)
		if (a[g] == '(')
			if (s - 1) {
				d += 2;
				s = 1;
			}
			else {
				d++;
				s = 1;
			}
		else
			if (s + 1) {
				d += 2;
				s = -1;
			}
			else {
				d++;
				s = -1;
			}
	printf("%d", d * 5);
}
