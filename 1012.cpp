#include <iostream>
using namespace std;
int a[60][60];
void asdf(int d, int f)
{
	a[d][f] = 0; // 
	if (a[d - 1][f]) {
		asdf(d - 1, f);
	}
	if (a[d + 1][f]) {
		asdf(d + 1, f);
	}
	if (a[d][f - 1]) {
		asdf(d, f - 1);
	}
	if (a[d][f + 1]) {
		asdf(d, f + 1);
	}
}
int main(void) {
	int s, z, g, t, c;
	cin >> c;
	while (c--) {
		z = 0;
		cin >> s >> g >> t; 
		while (t--) {
			int v1, v2;
			cin >> v1 >> v2;
			a[v1][v2] = 1;
		}
		for (int d = 0; d < s; d++) {
			for (int f = 0; f < g; f++) {
				if (a[d][f]) {
					asdf(d, f); 
					z++; 
				}
			}
		}
		cout << z << endl;
		for (int d = 0; d < s; d++) {
			for (int f = 0; f < g; f++) {
				a[d][f] = 0;
			}
		}
	}
}
