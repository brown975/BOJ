#include <stdio.h>
int a, s, d = 0;
int main() {
	scanf("%d", &a);
	while (a--) {
		scanf("%d", &s);
		if (s == 1)
			d--;
		for (int g = 2; g * g <= s; g++) {
			if (!(s % g)) {
				d--;
				break;
			}
		}
		d++;
	}
	printf("%d", d);
}
