#include <stdio.h>
#include <string>
#include <map>
using namespace std;
long long a, s, f;
char e[21], r[21];
int main() {
	scanf("%lld", &a);
	while (a--) {
		map<string, int> d;
		f = 1;
		scanf("%lld", &s);
		while (s--) {
			scanf("%s%s", e, r);
			d[r] += 1;
		}
		for (auto w = d.begin(); w != d.end(); w++) {
			f *= w->second + 1;
		}
		printf("%lld\n", f - 1);
	}
}
