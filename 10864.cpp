#include <stdio.h>
int a, s, d[1005], e, r;
int main() {
	scanf("%d%d", &a, &s);
	while (s--) {
		scanf("%d%d", &e, &r);
		d[e]++;
		d[r]++;
	}
	for (int g = 0; g < a;)
		printf("%d\n", d[++g]);
}
