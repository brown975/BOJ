#include <iostream>
using namespace std;
long long s, d[50];
int main(void) {
	cin >> s;
	d[1] = 1;
	d[2] = 1;
	for (int a = 3; a <= s; a++) {
		d[a] = d[a - 1] + d[a - 2];
	}
	cout << d[s];
}
