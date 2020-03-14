#include <iostream>
#include <vector>
using namespace std;
int a, s = 0;
int d[20], f[30], r[30];
void asdf(int e) {
	if (e == a) {
		s++;
		return;
	}
	for (int g = 0; g < a; g++) {
		if (d[g] | f[e + g] | r[e - g + a - 1])
			continue;
		d[g] = f[e + g] = r[e - g + a - 1] = true;
		asdf(e + 1);
		d[g] = f[e + g] = r[e - g + a - 1] = false;
	}
}
int main() {
	cin >> a;
	asdf(0);
	printf("%d", s);
}
