#include <stdio.h>
long long a;
int main() {
	scanf("%lld", &a);
	if ((a % 5 == 2) || (a % 5 == 0))
		printf("CY");
	else
		printf("SK");
}
