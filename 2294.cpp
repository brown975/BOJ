#include <stdio.h>
#include <algorithm>
using namespace std;
int a, s, d[101], f[10001];
int main() {
	scanf("%d%d", &a, &s);
	for (int g = 1; g <= a; g++)
		scanf("%d", &d[g]);
	for (int g = 1; g <= s; g++)
		f[g] = 1000000000;
	for (int g = 1; g <= a; g++)
		for (int h = d[g]; h <= s; h++)
			f[h] = min(f[h], f[h - d[g]] + 1);
	if (f[s] == 1000000000)
		f[s] = -1;
	printf("%d", f[s]);
}
