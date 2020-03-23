#include <stdio.h>
int a, s;
int main() {
	scanf("%d%d", &a, &s);
	if (a / 100 * 100 % s)
		printf("%02d", s - a / 100 * 100 % s);
	else
		printf("00");
}
