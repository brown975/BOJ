#include <stdio.h>
int a, s, d, f;
int main() {
	scanf("%d", &a);
	while (a--) {
		scanf("%d", &s);
		d += s / 30 * 10 + 10;
		f += s / 60 * 15 + 15;
	}
	if (d <= f)
		printf("Y ");
	if (d >= f)
		printf("M ");
	printf("%d", d < f ? d : f);
}
