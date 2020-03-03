#include <stdio.h>
#include <string.h>
long long a[100005] = { 0 }, s[100005], d, f = -10000000000000;
int main(void) {
	scanf("%lld", &d);
	for (int g = 1; g <= d; g++) {
		scanf("%lld", &s[g]);
	}
	for (int g = 1; g <= d; g++) {
		if (a[g - 1] > 0)
			a[g] = a[g - 1] + s[g];
		else
			a[g] = s[g];
		if (f < a[g])
			f = a[g];
	}
	printf("%lld", f);
}
