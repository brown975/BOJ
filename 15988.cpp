#include <stdio.h>
long long a, s, d[1000005] = { 1, 2, 4 };
int main() {
	scanf("%d", &a);
	for (int g = 3; g < 1000001; g++)
		d[g] = (d[g - 1] + d[g - 2] + d[g - 3]) % 1000000009;
	while (a--) {
		scanf("%d", &s);
		printf("%d\n", d[--s]);
	}
}
