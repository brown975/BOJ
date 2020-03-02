#include <stdio.h>
int a, s, d[10000];
int main(void) {
	scanf("%d%d", &a, &s);
	for (int g = 0; g < a; g++) {
		scanf("%d", &d[g]);
		if (d[g] < s)
			printf("%d ", d[g]);
	}
}
