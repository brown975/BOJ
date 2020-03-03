#include <stdio.h>
int a[8], s, d;
int main() {
	for (int g = 0; g < 8; g++)
		scanf("%d", &a[g]);
	s = a[0] + a[1] + a[2] + a[3];
	d = a[4] + a[5] + a[6] + a[7];
	printf("%d", (s > d) ? s : d);
}
