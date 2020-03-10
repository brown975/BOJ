#include <stdio.h>
long long a;
int main() {
	scanf("%lld", &a);
	if ((a % 7 == 2) || (a % 7 == 0))
		printf("CY");
	else
		printf("SK");
}
