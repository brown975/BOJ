#include <iostream>
using namespace std;
int a, s[1005][3], d[1005][3];
int asdf(int f, int g) {
	return (f > g) ? g : f;
}
int main(void) {
	cin >> a;
	for (int g = 0; g < a; g++) {
		cin >> s[g][0];
		cin >> s[g][1];
		cin >> s[g][2];
	}
	d[0][0] = s[0][0];
	d[0][1] = s[0][1];
	d[0][2] = s[0][2];
	for (int g = 1; g < a; g++) {
		d[g][0] = asdf(d[g - 1][1], d[g - 1][2]) + s[g][0];
		d[g][1] = asdf(d[g - 1][0], d[g - 1][2]) + s[g][1];
		d[g][2] = asdf(d[g - 1][0], d[g - 1][1]) + s[g][2];
	}
	cout << asdf(asdf(d[a - 1][0], d[a - 1][1]), d[a - 1][2]);
}
