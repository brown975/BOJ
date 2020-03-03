#include <stdio.h>
long long a, s, d[10000], f = 0, i = 0, j = 0, k = 0;
int main() {
	scanf("%lld%lld", &a, &s);
	for (int g = 0; g < a; g++) {
		scanf("%lld", &d[g]);
	}
	f += d[0];
	while (a != j) {
		if (f > s) {
			f -= d[i];
			i++;
		}
		else if (f < s) {
			j++;
			f += d[j];
		}
		else {
			k++;
			j++;
			f += d[j];
		}
	}
	printf("%lld", k);
}
