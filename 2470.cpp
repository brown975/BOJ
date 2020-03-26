#include <stdio.h>
#include <algorithm>
#include <math.h>
using namespace std;
int a, s[1000005], d = 2000000000, e, r;
bool asdf(int e, int r) {
	return abs(e) > abs(r);
}
int main() {
	scanf("%d", &a);
	for (int g = 0; g < a; g++)
		scanf("%d", &s[g]);
	sort(s, s + a, asdf);
	for (int g = 1; g < a; g++)
		if (abs(s[g - 1] + s[g]) < d) {
			d = abs(s[g - 1] + s[g]);
			e = s[g - 1];
			r = s[g];
		}
	printf("%d %d", min(e, r), max(e, r));
}
