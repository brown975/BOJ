#include <stdio.h>
int a;
int main() {
	scanf("%d", &a);
	if ((a % 7 == 1) || (a % 7 == 3))
		printf("CY");
	else
		printf("SK");
}
