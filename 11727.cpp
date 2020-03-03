#include <iostream>
using namespace std;
int s, f, d[1001] = { 1, 1 };
int main(void) {
	cin >> s;
	for (int a = 2; a <= s; a++) {
		d[a] = d[a - 1] + d[a - 2] * 2;
		d[a] %= 10007;
	}
	cout << d[s];
}
