#include <stdio.h>
int a, s, d[5];
int main() {
	scanf("%d%d", &a, &s);
	for (int g = 0; g < 5; g++)
		scanf("%d", &d[g]);
	for (int g = 0; g < 5; g++)
		printf("%d ", d[g] - a * s);
}
