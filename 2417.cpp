#include <stdio.h>
#include <math.h>
long long a;
int main() {
	scanf("%lld", &a);
	printf("%.0lf", floor(sqrt(a) - 0.00000001) + 1);
}
