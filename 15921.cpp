#include <stdio.h>
int a, s, d;
int main() {
	scanf("%d", &a);
	while (a--) {
		scanf("%d", &s);
		d += s;
	}
	if (!d)
		printf("divide by zero");
	else
		printf("1.00");
}
