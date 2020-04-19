#include <stdio.h>
#include <algorithm>
using namespace std;
int a, s, d[2][100005], f[2][100005];
int main() {
	scanf("%d", &a);
	while (a--) {
		scanf("%d", &s);
		for (int g = 0; g < s; g++)
			scanf("%d", &d[0][g]);
		for (int g = 0; g < s; g++)
			scanf("%d", &d[1][g]);
		f[0][0] = d[0][0];
		f[1][0] = d[1][0];
		f[0][1] = d[1][0] + d[0][1];
		f[1][1] = d[0][0] + d[1][1];
		for (int g = 2; g < s; g++) {
			f[0][g] = max(f[1][g - 1], f[1][g - 2]) + d[0][g];
			f[1][g] = max(f[0][g - 1], f[0][g - 2]) + d[1][g];
		}
		printf("%d\n", max(f[0][s - 1], f[1][s - 1]));
	}
}
