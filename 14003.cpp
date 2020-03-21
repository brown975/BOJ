#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;
int a, s[1000001], d[1000001], f[1000001];
int main() {
	scanf("%d", &a);
	for (int g = 0; g < a; g++)
		scanf("%d", &s[g]);
	d[0] = s[0], f[0] = 1;
	int e = 1;
	for (int g = 0; g < a; g++) {
		if (s[g] > d[e - 1]) {
			d[e++] = s[g];
			f[g] = e;
			continue;
		}
		int r = lower_bound(d, d + e, s[g]) - d;
		d[r] = s[g], f[g] = r + 1;
	}
	printf("%d\n", e);
	vector<int> w;
	for (int g = a - 1; g + 1; g--)
		if (f[g] == e) {
			w.push_back(s[g]);
			e--;
		}
	reverse(w.begin(), w.end());
	for (auto v : w)
		printf("%d ", v);
}
