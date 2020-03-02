#include <stdio.h>
#include <math.h>
int a, s, d;
int main() {
	scanf("%d%d%d", &a, &s, &d);
	if (s >= d) {
		printf("-1");
		return 0;
	}
	printf("%d", a / (d - s) + 1);
}
