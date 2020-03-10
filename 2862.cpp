#include <stdio.h>
long long s, d = 498454011879264, f = 806515533049393;
int main(void) {
	scanf("%lld", &s);
	while (s) {
		if (d > f) {
			if (d > s)
				d -= f;
			else if (d == s) {
				printf("%lld", d);
				break;
			}
			else
				s -= d;
		}
		else {
			if (f > s)
				f -= d;
			else if (f == s) {
				printf("%lld", f);
				break;
			}
			else
				s -= f;
		}
	}
}
