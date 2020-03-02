#include <stdio.h>
int a, s, d[100], f;
int main(void) {
	scanf("%d%d", &a, &s);
	for (int g = 0; g < a; g++)
		scanf("%d", &d[g]);
	for (int g = 0; g < a; g++)
		for (int h = 0; h < g; h++)
			for (int j = 0; j < h; j++)
				if ((d[g] + d[h] + d[j] <= s) && (f < d[g] + d[h] + d[j]))
					f = d[g] + d[h] + d[j];
	printf("%d", f);
}
