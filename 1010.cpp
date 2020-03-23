#include <stdio.h>
#include <string.h>
using namespace std;
long long a, s[35][35] = { 0 }, d, f;
long long asdf(long long e, long long r) {
	if ((e == r) || !r)
		return 1;
	if (s[e][r])
		return s[e][r];
	return s[e][r] = asdf(e - 1, r - 1) + asdf(e - 1, r);
}
int main() {
	scanf("%lld", &a);
	while (a--) {
		scanf("%lld%lld", &d, &f);
		printf("%lld\n", asdf(f, d));
	}
}
