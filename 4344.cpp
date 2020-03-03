#include <stdio.h>
#include <math.h>
int a;
int main() {
	scanf("%d", &a);
	while (a--) {
		int s, d[1000], e = 0;
		double f = 0;
		scanf("%d", &s);
		for (int g = 0; g < s; g++) {
			scanf("%d", &d[g]);
			f += d[g];
		}
		f /= s;
		for (int g = 0; g < s; g++)
			if (f < d[g])
				e++;
		printf("%.3lf%%\n", (double)e / s * 100);
	}
}
