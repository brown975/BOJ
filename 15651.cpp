#include <iostream>
#include <vector>
using namespace std;
int a, s;
int d[9];
void asdf(int e) {
	if (e == s) {
		for (int g = 0; g < s; g++)
			cout << d[g] << " ";
		cout << "\n";
		return;
	}
	for (int g = 1; g <= a; g++) {
		d[e] = g;
		asdf(e + 1);
	}
}
int main() {
	cin >> a >> s;
	asdf(0);
}
