#include <iostream>
using namespace std;
int a[1005] = { 0 }, s[1005] = { 0 }, d, f, k = 0;
int main() {
	cin >> d;
	for (int g = d; g; g--)
		cin >> a[g];
	for (int g = 1; g <= d; g++) {
		f = 0;
		for (int h = 1; h < g; h++)
			if ((a[h] < a[g]) && (f < s[h]))
				f = s[h];
		s[g] = f + 1;
		if (k < s[g]) {
			k = s[g];
		}
	}
	cout << k;
}
