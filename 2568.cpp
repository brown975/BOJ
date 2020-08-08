#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
vector<pair<int, int>> v, s;
bool f[500005];
vector<int> d;
int a, e, r, t, w;
int main() {
	scanf("%d", &a);
	for (int g = 0; g < a; g++) {
		scanf("%d%d", &e, &r);
		s.push_back({ e, r });
		f[e] = true;
	}
	sort(s.begin(), s.end());
	d.push_back(s[0].second);
	v.push_back({ 0,s[0].first });
	for (int g = 1; g < a; g++) {
		if (d[w] < s[g].second) {
			d.push_back(s[g].second);
			v.push_back({ ++w,s[g].first });
		}
		else {
			auto c = lower_bound(d.begin(), d.end(), s[g].second);
			*c = s[g].second;
			v.push_back({ lower_bound(d.begin(), d.end(), s[g].second) - d.begin(), s[g].first });
			t++;
		}
	}
	for (int g = v.size(); g + 1; g--) {
		if (v[g - 1].first == w) {
			w--;
			f[v[g - 1].second] = false;
		}
		if (w == -1)
			break;
	}
	printf("%d\n", t);
	for (int g = 1; g < 500001; g++) {
		if (f[g] == true) {
			printf("%d\n", g);
			t--;
		}
		if (!t)
			break;
	}
}
