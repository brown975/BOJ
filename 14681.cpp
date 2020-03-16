#include <stdio.h>
int a, s;
int main() {
	scanf("%d%d", &a, &s);
	if ((a > 0) & (s > 0))
		printf("1");
	if ((a < 0) & (s > 0))
		printf("2");
	if ((a < 0) & (s < 0))
		printf("3");
	if ((a > 0) & (s < 0))
		printf("4");
}
