#include <stdio.h>
long long a, s;
int main() {
	scanf("%lld", &a);
	s = a;
	if (a > 9)
		s += a - 9;
	if (a > 99)
		s += a - 99;
	if (a > 999)
		s += a - 999;
	if (a > 9999)
		s += a - 9999;
	if (a > 99999)
		s += a - 99999;
	if (a > 999999)
		s += a - 999999;
	if (a > 9999999)
		s += a - 9999999;
	if (a > 99999999)
		s += a - 99999999;
	printf("%lld", s);
}
