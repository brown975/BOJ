#include <iostream>
#include <vector>
using namespace std;
int a, s;
int d[9];
bool f[9];
void asdf(int e, int r) {
	if (e == s) {
		for (int g = 0; g < s; g++)
			cout << d[g] + 1 << " ";
		cout << "\n";
	}
	for (int g = r; g < a; g++) {
		if (!f[g]) {
			f[g] = true;
			d[e] = g;
			asdf(e + 1, g + 1);
			f[g] = false;
		}
	}
}
int main() {
	cin >> a >> s;
	asdf(0, 0);
}
