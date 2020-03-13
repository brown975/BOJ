#include <stdio.h>
int a, s = 0, d, f, g = 0;
int main() {
	scanf("%d", &a);
	while (++g) {
		f = 0;
		d = g * 10;
		while (d /= 10)
			if (d % 1000 == 666)
				f = 1;
		if (f)
			s++;
		if (s == a)
			break;
	}
	printf("%d", g);
}
