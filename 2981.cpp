#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
int a, d;
vector<int> s, f;
int asdf(int e, int r) {
	if (!(e % r))
		return r;
	return asdf(r, e % r);
}
int main(void) {
	scanf("%d", &a);
	s.resize(a);
	for (int g = 0; g < a; g++)
		scanf("%d", &s[g]);
	sort(s.begin(), s.end());
	d = s[1] - s[0];
	for (int g = 2; g < a; g++)
		d = asdf(d, s[g] - s[g - 1]);
	for (int g = 2; g * g <= d; g++) {
		if (!(d % g)) {
			f.push_back(g);
			f.push_back(d / g);
		}
	}
	f.push_back(d);
	sort(f.begin(), f.end());
	for (int g = 0; g < f.size(); g++) {
		if (g)
			if (f[g] == f[g - 1])
				continue;
		printf("%d ", f[g]);
	}
}
