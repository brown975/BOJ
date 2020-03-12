#include <stdio.h>
int a, s, d, f, g, h, j, k;
int main() {
	scanf("%d", &a);
	while (a--) {
		scanf("%d%d%d%d%d%d", &s, &d, &f, &g, &h, &j);
		k = (s - g) * (s - g) + (d - h) * (d - h);
		if (f == j & s == g & d == h)
			printf("-1");
		else if (k > (f + j)* (f + j))
			printf("0");
		else if (k == (f + j) * (f + j))
			printf("1");
		else if (k < (f + j) * (f + j)) {
			if (k > (f - j)* (f - j))
				printf("2");
			else if (k == (f - j) * (f - j))
				printf("1");
			else if (k < (f - j) * (f - j))
				printf("0");
		}
		printf("\n");
	}
}
