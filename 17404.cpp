#include <stdio.h>
#include <algorithm>
using namespace std;
int a, s[1001][3] = { 0 }, d[1001][3] = { 0 }, f[1001][3] = { 0 };
int asdf(int w, int e, int r) {
	if (w == 1) {
		if (e == r)
			return 20000000;
		else
			return s[w][e];
	}
	if (f[w][e])
		return d[w][e];
	f[w][e] = true;
	if (e == 0)
		d[w][0] = min(asdf(w - 1, 1, r), asdf(w - 1, 2, r)) + s[w][e];
	if (e == 1)
		d[w][1] = min(asdf(w - 1, 0, r), asdf(w - 1, 2, r)) + s[w][e];
	if (e == 2)
		d[w][2] = min(asdf(w - 1, 0, r), asdf(w - 1, 1, r)) + s[w][e];
	return d[w][e];
}
int main() {
	scanf("%d", &a);
	for (int g = 1; g <= a; g++)
		for (int h = 0; h < 3; h++)
			scanf("%d", &s[g][h]);
	int t = 200000000;
	if (a == 1)
		t = min(min(s[1][0], s[1][1]), s[1][2]);
	else
		for (int j = 0; j < 3; j++) {
			for (int g = 0; g <= a; g++)
				for (int h = 0; h < 3; h++)
					f[g][h] = 0;
			t = min(t, asdf(a, j, j));
		}
	printf("%d", t);
}
