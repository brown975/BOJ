#include <stdio.h>
int a;
int main() {
	scanf("%d", &a);
	if (a % 10)
		printf("-1");
	else
		printf("%d %d %d", a / 300, (a - a / 300 * 300) / 60, (a - a / 60 * 60) / 10);
}
