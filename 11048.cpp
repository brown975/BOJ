#include <stdio.h>
#include <algorithm>
using namespace std;
int a, s, d[1005][1005], f[1005][1005];
int main() {
	scanf("%d%d", &a, &s);
	for (int g = 1; g <= a; g++)
		for (int h = 1; h <= s; f[g][h] = ((g == 1) && (h == 1)) ? d[g][h] : max(f[g - 1][h], max(f[g][h - 1], f[g - 1][h - 1])) + d[g][h], h++)
			scanf("%d", &d[g][h]);
	printf("%d", f[a][s]);
}
