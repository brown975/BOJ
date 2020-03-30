#include <stdio.h>
#include <algorithm>
using namespace std;
int t, a[4001], s[4001], d[4001], f[4001], e[16000001], r[16000001];
long long w = 0;
int main() {
	scanf("%d", &t);
	for (int g = 0; g < t; g++)
		scanf("%d%d%d%d", &a[g], &s[g], &d[g], &f[g]);
	for (int g = 0; g < t; g++)
		for (int h = 0; h < t; h++)
			e[g * t + h] = a[g] + s[h];
	for (int g = 0; g < t; g++)
		for (int h = 0; h < t; h++)
			r[g * t + h] = d[g] + f[h];
	sort(r, r + t * t);
	for (int g = 0; g < t * t; g++)
		w += (upper_bound(r, r + t * t, -e[g]) - lower_bound(r, r + t * t, -e[g]));
	printf("%lld", w);
}
