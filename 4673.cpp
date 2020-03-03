#include <stdio.h>
short a[10001] = { 0 };
int d(int e) {
	int s = e;
	while (e) {
		s += e % 10;
		e /= 10;
	}
	return s;
}
int main(void) {
	for (int g = 1; g < 10001; g++) {
		a[d(g)]++;
	}
	for (int g = 1; g < 10001; g++)
		if (!a[g])
			printf("%d\n", g);
}
