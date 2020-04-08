#include <stdio.h>
int a, s;
int main() {
	scanf("%d%d", &a, &s);
	if (a < 2 || s < 18 && a == 2)
		printf("Before");
	else if (a > 2 || s > 18 && a == 2)
		printf("After");
	else
		printf("Special");
}
