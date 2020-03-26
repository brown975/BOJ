#include <stdio.h>
#include <algorithm>
using namespace std;
long long a, s[1050];
int main() {
	scanf("%lld", &a);
	for (long long g = 1; g <= 1023; g++)
		for (long long f = g, h = 9; h + 1; h--) {
			if (f % 2)
				s[g - 1] = 10 * s[g - 1] + h;
			f /= 2;
		}
	sort(s, s + 1023);
	if (a > 1022)
		printf("-1");
	else
		printf("%lld", s[a]);
}
