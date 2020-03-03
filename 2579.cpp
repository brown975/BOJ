#include <iostream>
using namespace std;
int a, s[305], d[305];
int asdf(int a, int s) {
	if (a > s)
		return a;
	else
		return s;
}
int main(void) {
	cin >> a;
	for (int g = 1; g <= a; g++) {
		cin >> s[g];
	}
	s[0] = 0;
	d[0] = 0;
	d[1] = s[1];
	d[2] = s[1] + s[2];
	for (int g = 3; g <= a; g++) {
		d[g] = asdf(d[g - 2] + s[g], d[g - 3] + s[g - 1] + s[g]);
	}
	cout << d[a];
}
