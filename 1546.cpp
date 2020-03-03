#include <stdio.h>
double a[1000], s, d = 0, f = 0;
int main() {
	scanf("%lf", &s);
	for (int g = 0; g < s; g++) {
		scanf("%lf", &a[g]);
		if (d < a[g])
			d = a[g];
	}
	for (int g = 0; g < s; g++) {
		a[g] = a[g] / d * 100;
		f += a[g];
	}
	printf("%lf", f / s);
}
