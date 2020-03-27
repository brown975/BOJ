#include <stdio.h>
#include <algorithm>
using namespace std;
int a, s, f = 1000000000, d[100005];
int main() {
	scanf("%d%d", &a, &s);
	for (int g = 1, h = 0; g <= a; g++) {
		scanf("%d", &d[g]);
		d[g] += d[g - 1];
		for (; d[g] - d[h] >= s; h++)
			f = min(f, g - h);
	}
	printf("%d", (f - 1e9) ? f : 0);
}
