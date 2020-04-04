#include <stdio.h>
int a, d[1005];
int main() {
	scanf("%d", &a);
	for (int g = 2, h; g <= a; g++) {
		int s[1005] = { 0 };
		for (h = g / 2 - 1; h + 1; h--)
			s[d[h] ^ d[g - h - 2]] = 1;
		for (h = 0; s[h]; h++);
		d[g] = h;
	}
	printf("%d", d[a] ? 1 : 2);
}
