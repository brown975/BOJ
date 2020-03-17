#include <stdio.h>
int a, s, d, e[102][102], r[102][102];
int main() {
	scanf("%d%d", &a, &s);
	for (int g = 0; g < a; g++)
		for (int h = 0; h < s; h++)
			scanf("%d", &e[g][h]);
	scanf("%d %d", &s, &d);
	for (int g = 0; g < s; g++)
		for (int h = 0; h < d; h++)
			scanf("%d", &r[g][h]);
	for (int g = 0; g < a; g++, puts("")) {
		for (int h = 0; h < d; h++) {
			int f = 0;
			for (int j = 0; j < s; j++) {
				f += e[g][j] * r[j][h];
			}
			printf("%d ", f);
		}
	}
}
