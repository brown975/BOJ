#include <stdio.h>
int a;
double s;
int main() {
	scanf("%d", &a);
	while (a--) {
		scanf("%lf", &s);
		printf("$%.2lf\n", s / 5 * 4);
	}
}
