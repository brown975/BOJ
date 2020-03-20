#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
int a, s[1001][3], d[1001][3][3];
int asdf(int w, int e, int r) {
	int f = d[w][e][r];
	if (f + 1)
		return f;
	if (w == a)
		return f = (((a == 1) || (e - r)) ? 0 : 1000000000);
	f = 1000000000;
	for (int g = 0; g < 3; g++)
		if (e - g)
			f = min(asdf(w + 1, g, r) + s[w][g], f);
	return f;
}
int main() {
	scanf("%d", &a);
	for (int g = 0; g < a; g++)
		for (int h = 0; h < 3; h++)
			scanf("%d", &s[g][h]);
	memset(d, -1, sizeof(d));
	int f = 1000000000;
	for (int g = 0; g < 3; g++)
		f = min(asdf(1, g, g) + s[0][g], f);
	printf("%d", f);
}
