#include <stdio.h>
int a, s[1000005], d = 10000000, f = -10000000;
int main() {
	scanf("%d", &a);
	for (int g = 0; g < a; g++) {
		scanf("%d", &s[g]);
		if (d > s[g])
			d = s[g];
		if (f < s[g])
			f = s[g];
	}
	printf("%d %d", d, f);
}
