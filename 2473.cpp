#include <stdio.h>
#include <algorithm>
using namespace std;
long long a, w, e, r, t = 9223372036854775807, s[5005];
int main(void) {
	scanf("%lld", &a);
	for (int g = 0; g < a; g++)
		scanf("%lld", &s[g]);
	sort(s, s + a);
	for (int g = 0, c, v; g < a; g++) {
		c = g + 1;
		v = a - 1;
		while (1) {
			if (c >= v)
				break;
			long long q = s[g] + s[c] + s[v];
			if (abs(q) < t) {
				t = llabs(q);
				w = g;
				e = c;
				r = v;
			}
			if (q < 0)
				c++;
			else
				v--;
		}
	}
	printf("%lld %lld %lld", s[w], s[e], s[r]);
}
