#include <stdio.h>
int a, s[55], d[55], f;
int main() {
	scanf("%d", &a);
	for (int g = 0; g < a; g++) {
		scanf("%d%d", &s[g], &d[g]);
	}
	for (int g = 0; g < a; g++) {
		f = 1;
		for (int h = 0; h < a; h++) {
			if (s[g] < s[h] && d[g] < d[h])
				f++;
		}
		printf("%d ", f);
	}
}
