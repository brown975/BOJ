#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;
int a, s;
vector<int> d;
bool asdf(int t) {
	int q = 1, w = d[0];
	for (int g = 1; g < a; ++g) {
		if (d[g] - w >= t) {
			q++;
			w = d[g];
		}
	}
	if (q >= s)
		return true;
	else
		return false;
}
int main() {
	scanf("%d%d", &a, &s);
	for (int g = 0, k; g < a; g++) {
		scanf("%d", &k);
		d.push_back(k);
	}
	sort(d.begin(), d.end());
	int e = 1, r = d[d.size() - 1] - d[0], f = 0;
	while (e <= r) {
		if (asdf((e + r) / 2)) {
			f = max(f, (e + r) / 2);
			e = (e + r) / 2 + 1;
		}
		else
			r = (e + r) / 2 - 1;
	}
	printf("%d", f);
}
