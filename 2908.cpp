#include <stdio.h>
int a[6], s, d;
int main() {
	for (int g = 0; g < 6; g++)
		scanf("%1d", &a[g]);
	s = a[2] * 100 + a[1] * 10 + a[0];
	d = a[5] * 100 + a[4] * 10 + a[3];
	if (s > d)
		printf("%d", s);
	else
		printf("%d", d);
}
