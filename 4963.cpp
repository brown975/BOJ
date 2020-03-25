#include <stdio.h>
#include <string.h>
using namespace std;
int a, s, d[55][55], f;
void asdf(int e, int r) {
	d[e][r] = 0;
	if (d[e][r + 1])
		asdf(e, r + 1);
	if (d[e][r - 1])
		asdf(e, r - 1);
	if (d[e + 1][r])
		asdf(e + 1, r);
	if (d[e - 1][r])
		asdf(e - 1, r);
	if (d[e + 1][r + 1])
		asdf(e + 1, r + 1);
	if (d[e - 1][r - 1])
		asdf(e - 1, r - 1);
	if (d[e + 1][r - 1])
		asdf(e + 1, r - 1);
	if (d[e - 1][r + 1])
		asdf(e - 1, r + 1);
}
int main() {
	while (1) {
		f = 0;
		memset(d, 0, sizeof(d));
		scanf("%d%d", &s, &a);
		if (!s && !a)
			break;
		for (int g = 1; g <= a; g++)
			for (int h = 1; h <= s; h++)
				scanf("%d", &d[g][h]);
		for (int g = 1; g <= a; g++)
			for (int h = 1; h <= s; h++)
				if (d[g][h]) {
					f++;
					asdf(g, h);
				}
		printf("%d\n", f);
	}
}
