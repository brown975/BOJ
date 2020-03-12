#include <stdio.h>
int a;
int main() {
	scanf("%d", &a);
	printf("%.6lf\n%.6lf", 3.141592653589 * a * a, 2.0 * a * a);
}
