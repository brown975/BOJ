#include <stdio.h>
long long a, s;
int main() {
	scanf("%lld", &a);
	s = a;
	for (long long g = 2; g * g <= a; g++) {
		if (!(a % g))
			s = s / g * (g - 1);
		while (!(a % g))
			a /= g;
	}
	if (a != 1)
		s = s / a * (a - 1);
	printf("%lld", s);
}
