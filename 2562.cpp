#include <stdio.h>
int a, s[15], d, f = -10000000;
int main() {
	for (int g = 0; g < 9; g++) {
		scanf("%d", &s[g]);
		if (f < s[g]) {
			f = s[g];
			d = g;
		}
	}
	printf("%d %d", f, d + 1);
}
