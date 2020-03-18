#include <stdio.h>
int a, s, d[101], f[10001] = { 1 };
int main() {
	scanf("%d %d", &a, &s);
	for (int g = 0; g < a; g++)
		scanf("%d", &d[g]);
	for (int g = 0; g < a; g++)
		for (int j = 1; j <= s; j++)
			if (j >= d[g])
				f[j] += f[j - d[g]];
	printf("%d", f[s]);
}
