#include <iostream>
using namespace std;
int a, s[10005] = { 0 }, d[10005] = { 0 };
int max(int e, int r) {
	return (e > r) ? e : r;
}
int main(void) {
	cin >> a;
	for (int g = 1; g <= a; g++) {
		cin >> s[g];
		(g == 1) ? d[1] = s[1] : (g == 2) ? d[2] = s[1] + s[2] : d[g] = max(d[g - 3] + s[g - 1] + s[g], d[g - 2] + s[g]);
		d[g] = max(d[g - 1], d[g]);
	}
	cout << d[a];
}
