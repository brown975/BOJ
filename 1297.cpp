#include <stdio.h>
#include <math.h>
double f, a, s, d;
int main() {
	scanf("%lf%lf%lf", &a, &s, &d);
	f = (a / sqrt(pow(s, 2.0) + pow(d, 2.0)));
	printf("%.0lf %.0lf", floor(f * s), floor(f * d));
}
