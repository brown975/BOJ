#include <stdio.h>
int a;
int main() {
	scanf("%d", &a);
	if ((a % 7 == 2) || (a % 7 == 0))
		printf("CY");
	else
		printf("SK");
}
