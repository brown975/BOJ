#include <stdio.h>
long long a, s;
int main() {
	scanf("%lld", &a);
	if (!a) {
		printf("1");
		return 0;
	}
	s = a;
	while (--a) {
		s *= a;
	}
	printf("%lld", s);
}
