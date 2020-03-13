#include <stdio.h>
int a, s[10001], d;
int main() {
	scanf("%d", &a);
	for (int g = 0; g < a; g++) {
		scanf("%d", &d);
		s[d]++;
	}
	for (int d = 1; d < 10001;) {
		if (!s[d]) {
			d++;
			continue;
		}
		s[d]--;
		printf("%d\n", d);
	}
}
