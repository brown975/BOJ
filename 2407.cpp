#include <stdio.h>
typedef long long ll;
ll a, s, d1 = 1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11;
void asdf(ll e) {
	d1 *= e;
	d2 *= e;
	d3 *= e;
	d4 *= e;
	d5 *= e;
	d6 *= e;
	d7 *= e;
	d8 *= e;
	d9 *= e;
	d10 *= e;
	d11 *= e;
	d2 += d1 / 10000000000000000;
	d1 %= 10000000000000000;
	d3 += d2 / 10000000000000000;
	d2 %= 10000000000000000;
	d4 += d3 / 10000000000000000;
	d3 %= 10000000000000000;
	d5 += d4 / 10000000000000000;
	d4 %= 10000000000000000;
	d6 += d5 / 10000000000000000;
	d5 %= 10000000000000000;
	d7 += d6 / 10000000000000000;
	d6 %= 10000000000000000;
	d8 += d7 / 10000000000000000;
	d7 %= 10000000000000000;
	d9 += d8 / 10000000000000000;
	d8 %= 10000000000000000;
	d10 += d9 / 10000000000000000;
	d9 %= 10000000000000000;
	d11 += d10 / 10000000000000000;
	d10 %= 10000000000000000;
}
void asd(ll e) {
	d10 += (d11 % e) * 10000000000000000;
	d11 /= e;
	d9 += (d10 % e) * 10000000000000000;
	d10 /= e;
	d8 += (d9 % e) * 10000000000000000;
	d9 /= e;
	d7 += (d8 % e) * 10000000000000000;
	d8 /= e;
	d6 += (d7 % e) * 10000000000000000;
	d7 /= e;
	d5 += (d6 % e) * 10000000000000000;
	d6 /= e;
	d4 += (d5 % e) * 10000000000000000;
	d5 /= e;
	d3 += (d4 % e) * 10000000000000000;
	d4 /= e;
	d2 += (d3 % e) * 10000000000000000;
	d3 /= e;
	d1 += (d2 % e) * 10000000000000000;
	d2 /= e;
	d1 /= e;
}
int main() {
	scanf("%lld%lld", &a, &s);
	for (ll g = s + 1; g <= a; g++)
		asdf(g);
	for (ll g = 1; g <= a - s; g++)
		asd(g);
	if (d11)
		printf("%lld%016lld%016lld%016lld%016lld%016lld%016lld%016lld%016lld%016lld%016lld", d11, d10, d9, d8, d7, d6, d5, d4, d3, d2, d1);
	else if (d10)
		printf("%lld%016lld%016lld%016lld%016lld%016lld%016lld%016lld%016lld%016lld", d10, d9, d8, d7, d6, d5, d4, d3, d2, d1);
	else if (d9)
		printf("%lld%016lld%016lld%016lld%016lld%016lld%016lld%016lld%016lld", d9, d8, d7, d6, d5, d4, d3, d2, d1);
	else if (d8)
		printf("%lld%016lld%016lld%016lld%016lld%016lld%016lld%016lld", d8, d7, d6, d5, d4, d3, d2, d1);
	else if (d7)
		printf("%lld%016lld%016lld%016lld%016lld%016lld%016lld", d7, d6, d5, d4, d3, d2, d1);
	else if (d6)
		printf("%lld%016lld%016lld%016lld%016lld%016lld", d6, d5, d4, d3, d2, d1);
	else if (d5)
		printf("%lld%016lld%016lld%016lld%016lld", d5, d4, d3, d2, d1);
	else if (d4)
		printf("%lld%016lld%016lld%016lld", d4, d3, d2, d1);
	else if (d3)
		printf("%lld%016lld%016lld", d3, d2, d1);
	else if (d2)
		printf("%lld%016lld", d2, d1);
	else
		printf("%lld", d1);
}
