#include <stdio.h>
int a, s;
int main() {
	while (1) {
		scanf("%d", &a);
		if (!a)
			break;
		int d = 0, f = 1;
		for (int g = a + 1; g <= 2 * a; g++, f = 1) {
			if (g == 1)
				f = 0;
			for (int h = 2; h * h <= g; h++) {
				if (!(g % h)) {
					f = 0;
					break;
				}
			}
			if (f)
				d++;
		}
		printf("%d\n", d);
	}
}
