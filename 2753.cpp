#include <stdio.h>
int a, s;
int main(void) {
	scanf("%d", &a);
	printf((a % 4) ? "0" : (a % 100) ? "1" : (a % 400) ? "0" : "1");
}
