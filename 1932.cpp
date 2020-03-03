#include <stdio.h>
#include <iostream>
using namespace std;
int a, s[505][505] = { 0 }, d[505][505] = { 0 }, f = 0;
int asdf(int t, int y) {
	return (t > y) ? t : y;
}
int main(void) {
	cin >> a;
	for (int g = 0; g < a; g++) {
		for (int h = 0; h <= g; h++) {
			cin >> s[g][h];
		}
	}
	d[0][0] = s[0][0];
	for (int g = 1; g < a; g++) {
		for (int h = 0; h <= g; h++) {
			if (h == 0) {
				d[g][h] = d[g - 1][h] + s[g][h];
			}
			d[g][h] = asdf(d[g - 1][h], d[g - 1][h - 1]) + s[g][h];
			if (g == (a - 1)) {
				f = asdf(d[g][h], f);
			}
		}
	}
	cout << f;
}
