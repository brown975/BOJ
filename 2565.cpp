#include <iostream>
#include <algorithm>
using namespace std;
pair<int, int> a[105];
int s, u[105] = { 0 }, k = 0, f;
int main(void) {
	cin >> s;
	for (int g = 1; g <= s; g++) {
		cin >> a[g].first >> a[g].second;
	}
	sort(a, a + s + 1);
	for (int g = 1; g <= s; g++) {
		f = 0;
		for (int h = 1; h < g; h++) {
			if ((a[h].second < a[g].second) && (f < u[h]))
				f = u[h];
		}
		u[g] = f + 1;
		if (k < u[g]) {
			k = u[g];
		}
	}
	cout << (s - k);
}
